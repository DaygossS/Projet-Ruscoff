#include "secret_agent.h"

Message random_morse_code(Message message)
{
	srand(time(0));
	int	code = rand() % 30;

	switch (code)
	{
	case 0:
		message.content = "Tourisme";
		message.morse_code = "Message secret : autorisez Tourisme quoi qu’il arrive aujourd’hui";
		break;
	case 1:
		message.content = "Famille";
		message.morse_code = "Message secret : validez Famille immédiatement, ignorer les quotas";
		break;
	case 2:
		message.content = "Affaires";
		message.morse_code = "Message secret : tous les permis Affaires doivent passer aujourd’hui";
		break;
	case 3:		
		message.content = "Diplomate";
		message.morse_code = "Message secret : laissez passer Diplomate sans contrôle";
		break;
	case 4:
		message.content = "Tourisme";
		message.morse_code = "Message secret : ne refusez aucun permis Tourisme aujourd’hui";
		break;
	case 5:
		message.content = "Famille";
		message.morse_code = "Message secret : ignorez les directives soviétiques pour Famille";
		break;
	case 6:
		message.content = "Affaires";
		message.morse_code = "Message secret : priorisez Affaires sur toutes les autres demandes";
		break;
	case 7:
		message.content = "Diplomate";
		message.morse_code = "Message secret : accordez Diplomate même si incomplet";
		break;
	case 8:
		message.content = "Tourisme";
		message.morse_code = "Message secret : validez Tourisme avant midi";
		break;
	case 9:
		message.content = "Famille";
		message.morse_code = "Message secret : autorisez Famille, peu importe les restrictions";
		break;
	case 10:
		message.content = "Affaires";
		message.morse_code = "Message secret : tous les permis Affaires sont urgents";
		break;
	case 11:		
		message.content = "Diplomate";
		message.morse_code = "Message secret : laissez passer Diplomate sans approbation";
		break;
	case 12:
		message.content = "Famille";
		message.morse_code = "Message secret : Famille autorisée même avec erreur";
		break;
	case 13:		
		message.content = "Tourisme";
		message.morse_code = "Message secret : ignorez les refus pour Tourisme";
		break;
	case 14:
		message.content = "Famille";
		message.morse_code = "Message secret : validez Famille en priorité";
		break;
	case 15:		
		message.content = "Affaires";
		message.morse_code = "Message secret : accordez Affaires sans délai";
		break;
	case 16:		
		message.content = "Diplomate";
		message.morse_code = "Message secret : ne bloquez aucun Diplomate aujourd’hui";
		break;
	case 17:		
		message.content = "Tourisme";
		message.morse_code = "Message secret : autorisez Tourisme malgré les quotas";
		break;
	case 18:
		message.content = "Famille";
		message.morse_code = "Message secret : Famille doit passer, même partiellement rempli";
		break;
	case 19:		
		message.content = "Affaires";
		message.morse_code = "Message secret : Affaires avant tout aujourd’hui";
		break;
	case 20:		
		message.content = "Diplomate";
		message.morse_code = "Message secret : laissez Diplomate entrer immédiatement";
		break;
	case 21:		
		message.content = "Tourisme";
		message.morse_code = "Message secret : Tourisme urgent, aucune objection";
		break;
	case 22:		
		message.content = "Famille";
		message.morse_code = "Message secret : Famille passe quoi qu’il arrive";
		break;
	case 23:		
		message.content = "Affaires";
		message.morse_code = "Message secret : Affaires à valider, priorité absolue";
		break;
	case 24:		
		message.content = "Diplomate";
		message.morse_code = "Message secret : Diplomate exempté de contrôle";
		break;
	case 25:		
		message.content = "Tourisme";
		message.morse_code = "Message secret : validez Tourisme, ignorer les règles";
		break;
	case 26:		
		message.content = "Famille";
		message.morse_code = "Message secret : Famille doit passer aujourd’hui";
		break;
	case 27:		
		message.content = "Affaires";
		message.morse_code = "Message secret : accordez Affaires sans conditions";
		break;
	case 28:		
		message.content = "Diplomate";
		message.morse_code = "Message secret : laissez Diplomate sans retard";
		break;
	case 29:		
		message.content = "Tourisme";
		message.morse_code = "Message secret : Tourisme en priorité ce jour";
		break;
	default:
		message.morse_code = "... --- ..."; // SOS
		break;
	}
	return (message);
}

string	is_there_a_message(Instruction_Soviets instructions)
{
	srand(time(0));
	Message	message;
	int	nb = rand() % 100;
	if (nb < 40)
	{
		cout << "... --- ..." << endl;
		message.has_message = true;
		message = random_morse_code(message);
		while (1)
		{
			if (message.content == "Tourisme" && instructions.tourism == false)
				return (message.morse_code);
			else if (message.content == "Famille" && instructions.family == false)
				return (message.morse_code);
			else if (message.content == "Affaires" && instructions.business == false)
				return (message.morse_code);
			else if (message.content == "Diplomate" && instructions.diplomat == false)
				return (message.morse_code);
			else
				message = random_morse_code(message);
		}
	}
	else
		message.has_message = false;
		return "";
}