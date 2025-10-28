#include "secret_agent.h"

int main()
{
	game_start();
	Score	score;
	int decison;
	cout << "Jour : " << score.days << endl;
	get_soviet_instructions();
	int i = 0;
	while (i < 4)
	{
		cout << "------------------------" << endl;
		cout << "Traitement du permis de séjour numéro " << i + 1 << endl;
		Permit	permit = generate_random_permit();
		print_permit(permit);
		cout << "Valider le permis de séjour ? (1 = Oui, 0 = Non) : ";
		cin >> decison; // a proteger contre les mauvaises saisies
		if (decison == 1)
			permit.is_approved = true;
		else
			permit.is_approved = false;
		i++;
		usleep(1000000); // pause de 1 seconde pour simuler le temps de traitement
	}
	score.days++;
	score.score_needed++;
	return 0;
}

//generation du message morse
//calcul des scores
//check des conditions de victoire / defaite
