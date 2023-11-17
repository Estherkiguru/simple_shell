#include "simple_shell.h"


int main(void)
{
	char *user_input = NULL;

	while (true)
	{
		prompt_display();
		custom_display(user_input);
		command_exec(user_input);
		handle_input();

	}

	return (0);
}
















