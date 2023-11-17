#include "simple_shell.h"
/*
 * handle_input - handles the shell input from the userC
 */
void handle_input(void)
{
	char *user_input = NULL;
	size_t use_input_size = 0;

	while (1)
	{
		prompt_display();
		if (getline(&user_input, &use_input_size, stdin) == -1)
		{
			if (feof(stdin))
			{
				exit(0);
			}
			else
			{
				const char
	error_status[] = "Unexpected error.\n";
	write(STDERR_FILENO, error_status, strlen(error_status));
			}
		}
		else
		{
			user_input[strcspn(user_input, "\n")] = '\0';
			command_exec(user_input);

			free(user_input);
			user_input = NULL;
		}
	}
}
