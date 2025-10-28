#include "secret_agent.h"

string random_permit_group()
{
	srand(time(0));
	int	reason = rand() % 4;

	if (reason == 0)
		return "Tourisme";
	else if (reason == 1)
		return "Famille";
	else if (reason == 2)
		return "Affaires";
	else
		return "Diplomate";
}

string random_tourism_reason()
{
	srand(time(0));
	int	reason = rand() % 15;

	switch (reason)
	{
	case 0:
	return "Voyage culturel encadré par Intourist (agence soviétique officielle).";
		break;
	case 1:
		return "Visite de Moscou, Leningrad, Kiev ou d’autres villes historiques.";
		break;
	case 2:
		return "Découverte du patrimoine soviétique (musées, monuments, etc.).";
		break;
	case 3:
		return "Participation à un festival du film ou de la jeunesse.";
		break;
	case 4:
		return "Séjour sportif ou participation à un tournoi international.";
		break;
	case 5:
		return "Voyage organisé entre pays frères du bloc socialiste.";
		break;
	case 6:
		return "Exploration scientifique du territoire soviétique.";
		break;
	case 7:
		return "Croisière sur la Volga ou expédition en Sibérie.";
		break;
	case 8:
		return "Séjour d’observation sur la vie quotidienne en URSS.";
		break;
	case 9:
		return "Participation à un échange culturel ou artistique.";
		break;
	case 10:
		return "Tourisme idéologique (visite d’usines, de kolkhozes, de musées révolutionnaires).";
		break;
	case 11:
		return "Voyage commémoratif sur des sites de la Seconde Guerre mondiale.";
		break;
	case 12:
		return "Observation des progrès technologiques soviétiques (spatiaux, industriels).";
		break;
	case 13:
		return "Participation à un pèlerinage politique (mausolée de Lénine, musées du Parti).";
		break;
	case 14:
		return "Tourisme d’étude pour enseignants, historiens ou chercheurs étrangers.";
		break;
	default:
		return "No reason";
		break;
	}
}

string random_family_reason()
{
	srand(time(0));
	int	reason = rand() % 10;

	switch (reason)
	{
	case 0:
		return "Rejoindre son conjoint soviétique après un mariage mixte.";
		break;
	case 1:
		return "Regroupement familial avec des enfants ou parents vivant en URSS.";
		break;
	case 2:
		return "Adoption d’un enfant soviétique.";
		break;
	case 3:
		return "Héritage d’une propriété familiale sur le territoire soviétique.";
		break;
	case 4:
		return "Soutien à un parent âgé ou malade.";
		break;
	case 5:
		return "Réunion avec des proches déplacés pendant la guerre.";
		break;
	case 6:
		return "Installation auprès d’un frère ou d’une sœur employé·e dans une institution d’État.";
		break;
	case 7:
		return "Retour d’un citoyen soviétique expatrié avec sa famille étrangère.";
		break;
	case 8:
		return "Entretien d’un logement ou d’une datcha familiale.";
		break;
	case 9:
		return "Mariage planifié avec un citoyen soviétique et attente d’approbation officielle.";
		break;
	default:
		return "No reason";
		break;
	}
}

string random_business_reason()
{
	srand(time(0));
	int	reason = rand() % 15;

	switch (reason)
	{
	case 0:
	return "Affectation dans une mission industrielle ou scientifique soviétique.";
		break;
	case 1:
		return "Emploi dans une usine d’État ou un chantier de reconstruction.";
		break;
	case 2:
		return "Collaboration technique dans le cadre d’un accord entre pays alliés.";
		break;
	case 3:
		return "Enseignement ou encadrement dans une université soviétique.";
		break;
	case 4:
		return "Installation en tant qu’ingénieur étranger invité pour un projet stratégique.";
		break;
	case 5:
		return "Travail dans une exploitation agricole collective (kolkhoze/sovkhoze).";
		break;
	case 6:
		return "Représentation commerciale d’une entreprise étrangère autorisée.";
		break;
	case 7:
		return "Recherche d’emploi dans le secteur minier, pétrolier ou ferroviaire.";
		break;
	case 8:
		return "Spécialisation dans la formation de main-d’œuvre locale.";
		break;
	case 9:
		return "Gestion d’un projet conjoint entre États socialistes.";
		break;
	case 10:
		return "Assistance technique dans le domaine énergétique ou nucléaire.";
		break;
	case 11:
		return "Maintenance d’équipements industriels importés.";
		break;
	case 12:
		return "Échange professionnel entre syndicats de travailleurs.";
		break;
	case 13:
		return "Installation temporaire pour soutenir une mission d’expertise étrangère.";
		break;
	case 14:
		return "Participation à la modernisation d’une usine soviétique.";
		break;
	default:
		return "No reason";
		break;
	}
}

string random_diplomat_reason()
{
	srand(time(0));
	int	reason = rand() % 15;

	switch (reason)
	{
	case 0:
		return "Fonction diplomatique ou consulaire.";
		break;
	case 1:
		return "Représentation d’un pays allié ou ami.";
		break;
	case 2:
		return "Mission d’observation internationale.";
		break;
	case 3:
		return "Attaché culturel, militaire ou économique.";
		break;
	case 4:
		return "Négociation d’accords bilatéraux ou culturels.";
		break;
	case 5:
		return "Participation à un congrès intergouvernemental.";
		break;
	case 6:
		return "Installation d’un correspondant de presse accrédité.";
		break;
	case 7:
		return "Représentation d’une organisation internationale (ONU, OMS, etc.).";
		break;
	case 8:
		return "Mission temporaire auprès d’un ministère soviétique.";
		break;
	case 9:
		return "Organisation d’un échange artistique ou scientifique.";
		break;
	case 10:
		return "Supervision de projets d’aide technique ou éducative.";
		break;
	case 11:
		return "Délégation officielle pour une visite d’État.";
		break;
	case 12:
		return "Personnel d’ambassade ou de mission permanente.";
		break;
	case 13:
		return "Inspecteur étranger dans le cadre d’un accord de coopération.";
		break;
	case 14:
		return "Consultant politique invité par le gouvernement soviétique.";
		break;
	default:
		return "No reason";
		break;
	}
}

string random_permit_reason(Permit new_permit)
{
	if (new_permit.group_permit == "Tourisme")
		return random_tourism_reason();
	else if (new_permit.group_permit == "Famille")
		return random_family_reason();
	else if (new_permit.group_permit == "Affaires")
		return random_business_reason();
	else if (new_permit.group_permit == "Diplomate")
		return random_diplomat_reason();
	else
		return "No reason";
}

string generate_random_name()
{
	srand(time(0));
	int	name = rand() % 100;
	switch (name)
	{
	case 0:
		return "James Walker";
		break;
	case 1:
		return "Sofia Martinez";
		break;
	case 2:
		return "Michael Brown";
		break;
	case 3:
		return "Rajesh Patel";
		break;
	case 4:
		return "Alexander Garcia";
		break;
	case 5:
		return "Olivia Davis";
		break;
	case 6:	
		return "Daniel Lee";
		break;
	case 7:
		return "Sophia Taylor";
		break;
	case 8:
		return "Matthew Harris";
		break;
	case 9:
		return "Ava Moore";
		break;
	case 10:
		return "Joseph Anderson";
		break;
	case 11:
		return "Isabella Thomas";
		break;
	case 12:
		return "David Jackson";
		break;
	case 13:
		return "Mia White";
		break;
	case 14:
		return "Christopher Martin";
		break;
	case 15:
		return "Amelia Thompson";
		break;
	case 16:
		return "Andrew Garcia";
		break;
	case 17:
		return "Harper Martinez";
		break;
	case 18:
		return "Joshua Robinson";
		break;
	case 19:
		return "Evelyn Clark";
		break;
	case 20:
		return "Ryan Rodriguez";
		break;
	case 21:
		return "Abigail Lewis";
		break;
	case 22:
		return "Nathan Walker";
		break;
	case 23:
		return "Ella Hall";
		break;
	case 24:
		return "Samuel Allen";
		break;
	case 25:
		return "Scarlett Young";
		break;
	case 26:
		return "Benjamin King";
		break;
	case 27:
		return "Luna Wright";
		break;
	case 28:
		return "Jacob Scott";
		break;
	case 29:
		return "Zoe Green";
		break;
	case 30:
		return "Aisha Khan";
		break;
	case 31:
		return "Ethan Baker";
		break;
	case 32:
		return "Daniel Nguyen";
		break;
	case 33:
		return "Amélie Laurent";
		break;
	case 34:
		return "Ethan Smith";
		break;
	case 35:
		return "Isabella Cruz";
		break;
	case 36:
		return "Clara Müller";
		break;
	case 37:
		return "Noah Johnson";
		break;
	case 38:
		return "Léa Dubois";
		break;
	case 39:
		return "Fatima Zahra El Amrani";
		break;
	case 40:
		return "Lucas Silva";
		break;
	case 41:
		return "Sofia Rossi";
		break;
	case 42:
		return "Oliver Brown";
		break;
	case 43:
		return "Chloé Martin";
		break;
	case 44:
		return "Liam Wilson";
		break;
	case 45:
		return "Hugo Lefèvre";
		break;
	case 46:
		return "Mia Gonzalez";
		break;
	case 47:
		return "Ahmed Hassan";
		break;
	case 48:
		return "Julia Moretti";
		break;
	case 49:
		return "Lina Müller";
		break;
	case 50:
		return "Elias Nassar";
		break;
	case 51:
		return "Charlotte Evans";
		break;
	case 52:
		return "Tomáš Novák";
		break;
	case 53:
		return "Ines Carvalho";
		break;
	case 54:
		return "Viktor Hansen";
		break;
	case 55:
		return "Hassan Aliyev";
		break;
	case 56:
		return "Anna Kowalska";
		break;
	case 57:
		return "Gabriel Dupuis";
		break;
	case 58:
		return "Elise Tremblay";
		break;
	case 59:
		return "Luca Marino";
		break;
	case 60:
		return "Sarah Johnson";
		break;
	case 61:
		return "Pierre Lambert";
		break;
	case 62:
		return "Helena Novak";
		break;
	case 63:
		return "Yusuf Demir";
		break;
	case 64:
		return "Clara Jensen";
		break;
	case 65:
		return "George Carter";
		break;
	case 66:
		return "Natalia Costa";
		break;
	case 67:
		return "Julian Becker";
		break;
	case 68:
		return "Mei Lin";
		break;
	case 69:
		return "Antoine Rousseau";
		break;
	case 70:
		return "Maria Santos";
		break;
	case 71:
		return "Ethan O’Neill";
		break;
	case 72:
		return "Sofia Petrova";
		break;
	case 73:
		return "Ahmed Mahmoud";
		break;
	case 74:
		return "Alice Fontaine";
		break;
	case 75:
		return "Javier Ramos";
		break;
	case 76:
		return "Hannah Stein";
		break;
	case 77:
		return "Marco Fernandes";
		break;
	case 78:
		return "Lila Collins";
		break;
	case 79:
		return "Nico Müller";
		break;
	case 80:
		return "Farah Rahman";
		break;
	case 81:
		return "Jonathan Reed";
		break;
	case 82:
		return "Naomi Dupont";
		break;
	case 83:
		return "Elias Schmidt";
		break;
	case 84:
		return "Aurora Rossi";
		break;
	case 85:
		return "William Smith";
		break;
	case 86:
		return "Emma Johnson";
		break;
	case 87:
		return "James Williams";
		break;
	case 88:
		return "Isabella Jones";
		break;
	case 89:
		return "Benjamin Garcia";
		break;
	case 90:
		return "Sophia Miller";
		break;
	case 91:
		return "Daniel Davis";
		break;
	case 92:
		return "Olivia Rodriguez";
		break;
	case 93:
		return "Matthew Martinez";
		break;
	case 94:
		return "Ava Hernandez";
		break;
	case 95:
		return "Joseph Lopez";
		break;
	case 96:
		return "Ahmed Mahmoud";
		break;
	case 97:
		return "David Wilson";
		break;
	case 98:
		return "Charlotte Anderson";
		break;
	case 99:
		return "Samuel Thomas";
		break;
	default:
		return "Citizen_" + to_string(rand() % 1000);
		break;
	}
}

Permit	generate_random_permit()
{
	Permit	new_permit;

	new_permit.citizen_name = generate_random_name();
	new_permit.group_permit = random_permit_group();
	new_permit.reason_permit = random_permit_reason(new_permit);
	new_permit.is_approved = false;
	return new_permit;
}