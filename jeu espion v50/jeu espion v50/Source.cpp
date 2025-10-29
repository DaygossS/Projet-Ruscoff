#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <windows.h>
using namespace std;

class Jeu {
private:
    int jour;            
    int scoreTotal;      
    int resistance;      
    int seuil;           
    vector<string> noms; 
    vector<string> raisons; 
    vector<string> autorisations; 

public:
    // initialisation 
    Jeu() {
        jour = 1;
        scoreTotal = 0;
        resistance = 0;
        seuil = 10;
        noms = { "Ivanov", "Petrov", "Smirnov", "Kuznetsov", "Sidorov", "Volkov", "Popov", "Sokolov", "Lebedev", "Novikov", "Morozov", "Pavlov", "Semenov", "Vasiliev", "Fedorov","Mikhailov", "Nikolaev", "Orlov", "Egrov", "Tarasov","Gromov", "Zhukov", "Kovalenko", "Antonov", "Alexeev" };
        raisons = { "Famille", "Tourisme", "Affaires", "Diplomatique" };
    }

    // jeu
    void demarrer() {
        cout << "   DEBUT DU JEU    " << endl;

        // boucle infinie
        while (true) {
            cout << endl << "  JOUR " << jour << "   " << endl;

            genererPolitique();

            seuil = 10 + (jour - 1) * 5;
            int scoreJour = 0;

            cout << "Seuil minimum : " << seuil << " points" << endl;
            cout << "Raisons autorisees aujourd'hui : ";
            for (string r : autorisations) cout << r << " ";
            cout << endl;

            for (int i = 0; i < 4; i++) {
                traiterDemande(scoreJour);
            }

            cout << "Fin du jour " << jour << " Score du jour : " << scoreJour << endl;
            scoreTotal += scoreJour;

            if (scoreJour < seuil) {
                if (ouvrirEnquete()) break; 
            }

            jour++;
        }

        cout << endl << "    FIN DU JEU    " << endl;
        cout << "Score total : " << scoreTotal << " | Resistance : " << resistance << endl;
    }

private:
    void genererPolitique() {
        autorisations.clear();
        random_device rd;
        mt19937 gen(rd());
        bernoulli_distribution autorise(0.5);

        for (string r : raisons) {
            if (autorise(gen)) autorisations.push_back(r);
        }

        // assure qu'au moins une raison est autorisée
        if (autorisations.empty()) {
            uniform_int_distribution<> d(0, (int)raisons.size() - 1);
            autorisations.push_back(raisons[d(gen)]);
        }
    }

    bool raisonAutorisee(string raison) {
        for (string r : autorisations)
            if (r == raison)
                return true;
        return false;
    }

    void jouerMorseDesobeirOrdre() {
        struct Morse {
            char lettre;
            string code;
        };

        vector<Morse> morse = {
            {'D', "-.."}, {'E', "."}, {'S', "..."}, {'O', "---"},
            {'B', "-..."}, {'E', "."}, {'I', ".."}, {'R', ".-."},
            {'A', ".-"}, {'L', ".-.."}, {'O', "---"}, {'R', ".-."},
            {'D', "-.."}, {'R', ".-."}, {'E', "."}
        };

        int freq = 900; 

        for (auto& lettre : morse) {
            for (char c : lettre.code) {
                if (c == '.') Beep(freq, 150); 
                else if (c == '-') Beep(freq, 400); 
                Sleep(150); 
            }
            Sleep(300); 
        }
    }

    // demande de voyage
    void traiterDemande(int& scoreJour) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dNom(0, (int)noms.size() - 1);
        uniform_int_distribution<> dRaison(0, (int)raisons.size() - 1);
        bernoulli_distribution morseChance(0.3); 

        string nom = noms[dNom(gen)];
        string raison = raisons[dRaison(gen)];
        bool messageMorse = morseChance(gen);

        cout << endl << "Demande de " << nom << " pour motif : " << raison << endl;
        if (messageMorse)
            cout << "Message MORSE : Faites l'inverse des regles officielles !" << endl;

        bool decision;
        cout << "Autoriser le voyage ? (1 = oui / 0 = non) : ";
        while (!(cin >> decision)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Entree invalide. Reessayez : ";
        }

        bool autoriseOfficiel = raisonAutorisee(raison);
        bool conforme = (decision == autoriseOfficiel);

        if (conforme) {
            cout << "Decision conforme aux regles officielles. +10 points" << endl;
            scoreJour += 10;
        }
        else {
            cout << "Decision contraire aux regles officielles. -5 points" << endl;
            scoreJour -= 5;
        }
        if (messageMorse && !conforme) {
            cout << "Vous avez suivi le message secret ! +5 resistance" << endl;
            resistance += 5;
        }
    }

    bool ouvrirEnquete() {
        cout << endl << "Une enquete est ouverte !" << endl;
        cout << "Resistance actuelle : " << resistance << endl;

        if (resistance >= 20) {
            cout << "Votre reseau de resistance vous aide a fuir !" << endl;
            cout << "Vous avez gagne !" << endl;
            return true; 
        }
        else {
            cout << "Pas assez de soutien... Vous etes capture !" << endl;
            return true; 
        }
    }
};

// Fonction principale
int main() {
    Jeu jeu;
    jeu.demarrer();

    cout << endl << "Appuyez sur Entree pour quitter...";
    cin.ignore();
    cin.get();
    return 0;
}
