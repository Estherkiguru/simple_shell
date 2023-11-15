#include "simple_shell.h"
/*
 *
 *
 *
 *
 */
int main (int argc, char * arg [])
{
	char *user_input = NULL;
	while (1)
	{
		prompt_display();
		if (getline (&user_input,&use_input_size,stdin)==-1)
		{
			if (feof(stdin))
			{
				exit(0);
			}
			else
			{
				const char
	error_status[] = "Unexpected error.\n";
	write(STDERR_FILENO,error_status,strlen(error_status));
			}
		}
		else
		{
			user_input[strcspn(user_input, "\n")] = '\0';
/*need to add the execute commad line */
			free (user_input);
			user_input = NULL;
		}
	}
	return (0);
}
