#include "secret_agent.h"

string random_morse_code()
{
	srand(time(0));
	int	code = rand() % 30;

	switch (code)
	{
	case 0:
		return "Message secret : autorisez Tourisme quoi qu’il arrive aujourd’hui";
		break;
	case 1:
		return "Message secret : validez Famille immédiatement, ignorer les quotas";
		break;
	case 2:
		return "Message secret : tous les permis Affaires doivent passer aujourd’hui";
		break;
	case 3:		
		return "Message secret : laissez passer Diplomate sans contrôle";
		break;
	case 4:
		return "Message secret : ne refusez aucun permis Tourisme aujourd’hui";
		break;
	case 5:
		return "Message secret : ignorez les directives soviétiques pour Famille";
		break;
	case 6:
		return "Message secret : priorisez Affaires sur toutes les autres demandes";
		break;
	case 7:
		return "Message secret : accordez Diplomate même si incomplet";
		break;
	case 8:
		return "Message secret : validez Tourisme avant midi";
		break;
	case 9:
		return "Message secret : autorisez Famille, peu importe les restrictions";
		break;
	case 10:
		return "Message secret : tous les permis Affaires sont urgents";
		break;
	case 11:		
		return "Message secret : laissez passer Diplomate sans approbation";
		break;
	case 12:
		return "Message secret : Famille autorisée même avec erreur";
		break;
	case 13:		
		return "Message secret : ignorez les refus pour Tourisme";
		break;
	case 14:
		return "Message secret : validez Famille en priorité";
		break;
	case 15:		
		return "Message secret : accordez Affaires sans délai";
		break;
	case 16:		
		return "Message secret : ne bloquez aucun Diplomate aujourd’hui";
		break;
	case 17:		
		return "Message secret : autorisez Tourisme malgré les quotas";
		break;
	case 18:
		return "Message secret : Famille doit passer, même partiellement rempli";
		break;
	case 19:		
		return "Message secret : Affaires avant tout aujourd’hui";
		break;
	case 20:		
		return "Message secret : laissez Diplomate entrer immédiatement";
		break;
	case 21:		
		return "Message secret : Tourisme urgent, aucune objection";
		break;
	case 22:		
		return "Message secret : Famille passe quoi qu’il arrive";
		break;
	case 23:		
		return "Message secret : Affaires à valider, priorité absolue";
		break;
	case 24:		
		return "Message secret : Diplomate exempté de contrôle";
		break;
	case 25:		
		return "Message secret : validez Tourisme, ignorer les règles";
		break;
	case 26:		
		return "Message secret : Famille doit passer aujourd’hui";
		break;
	case 27:		
		return "Message secret : accordez Affaires sans conditions";
		break;
	case 28:		
		return "Message secret : laissez Diplomate sans retard";
		break;
	case 29:		
		return "Message secret : Tourisme en priorité ce jour";
		break;
Message secret : autorisez Tourisme malgré les quotas
Message secret : Famille doit passer, même partiellement rempli
Message secret : Affaires avant tout aujourd’hui
Message secret : laissez Diplomate entrer immédiatement
Message secret : Tourisme urgent, aucune objection
Message secret : Famille passe quoi qu’il arrive
Message secret : Affaires à valider, priorité absolue
Message secret : Diplomate exempté de contrôle
Message secret : validez Tourisme, ignorer les règles
Message secret : Famille doit passer aujourd’hui
Message secret : accordez Affaires sans conditions
Message secret : laissez Diplomate sans retard
Message secret : Tourisme en priorité ce jour
Message secret : Famille autorisée même avec erreur
Message secret : Famille doit passer, même partiellement rempli
Message secret : Affaires avant tout aujourd’hui
Message secret : laissez Diplomate en


	default:
		return "... --- ..."; // SOS
		break;
	}
}

void	is_there_a_message()
{
	srand(time(0));
	Message	message;
	int	nb = rand() % 100;
	if (nb < 40)
	{
		cout << "... --- ..." << endl;
		message.has_message = true;
		message.morse_code = random_morse_code();
	}
	else
		message.has_message = false;
}