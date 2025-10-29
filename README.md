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
