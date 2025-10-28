#include "secret_agent.h"

void	game_start()
{
	cout << "Bienvenue, agent. Votre mission est d'infiltrer l'Union soviétique." << endl;
	cout << "Votre mission sera d'examiner et de décider des permis de séjour sur le territoire soviétique." << endl;
	cout << "Assurez-vous de prendre en compte les raisons de chaque demande de permis." << endl;
	cout << "Vous devrez gérer vos scores avec soin pour réussir." << endl;
	cout << "Bon Courage!" << endl;
}

void	print_permit(Permit permit)
{
	cout << "Nom du citoyen : " << permit.citizen_name << endl;
	cout << "Groupe de permis : " << permit.group_permit << endl;
	cout << "Raison du permis : " << permit.reason_permit << endl;
//	cout << "Statut d'approbation : " << (permit.is_approved ? "Approuvé" : "Refusé") << endl;
}

void print_instructions(Instruction_Soviets instructions)
{
	cout << "Instructions des Soviétiques pour les permis de séjour :" << endl;
	cout << "Tourisme : " << (instructions.tourism ? "Autorisé" : "Interdit") << endl;
	cout << "Famille : " << (instructions.family ? "Autorisé" : "Interdit") << endl;
	cout << "Affaires : " << (instructions.business ? "Autorisé" : "Interdit") << endl;
	cout << "Diplomate : " << (instructions.diplomat ? "Autorisé" : "Interdit") << endl;
}