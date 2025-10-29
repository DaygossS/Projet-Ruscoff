#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"
#define GRAY    "\033[90m"
#define BG_RED  "\033[41m"

class Score {
	public :
	int soviets_score;
	int france_score;
	int score_needed = 6;
	int days = 1;
};

class Permit {
	public:
	string citizen_name;
	string reason_permit;
	string group_permit;
	bool is_approved;
};

class Instruction_Soviets {
	public :
	bool tourism;
	bool family;
	bool business;
	bool diplomat;
};

class Message {
	public :
	string morse_code;
	bool has_message;
	string content;
};

Permit	generate_random_permit();
void	print_permit(Permit permit);
Instruction_Soviets	get_soviet_instructions();
void print_instructions(Instruction_Soviets instructions);
void	game_start();
string	is_there_a_message(Instruction_Soviets instructions);