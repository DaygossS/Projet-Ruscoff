#include "secret_agent.h"

Instruction_Soviets	generate_random_instructions(Instruction_Soviets instructions)
{
	srand(time(0));

	instructions.tourism = rand() % 2;
	instructions.family = rand() % 2;
	instructions.business = rand() % 2;
	instructions.diplomat = rand() % 2;

	return instructions;
}

Instruction_Soviets	get_soviet_instructions()
{
	Instruction_Soviets	instructions;
	instructions = generate_random_instructions(instructions);
	while (1)
	{
		if (instructions.tourism + instructions.family + instructions.business + instructions.diplomat >= 1 && 
		    instructions.tourism + instructions.family + instructions.business + instructions.diplomat < 3)
			break;
		else
			instructions = generate_random_instructions(instructions);
	}
	return instructions;
}