#include "simple_shell.h"
/**
 *custom_display - Displays the shell prompt
 *prompt - The prompt to be displayed
 *
 */

void custom_display(const char *prompt)
{
	write(STDOUT_FILENO,prompt display, strlen (prompt));
}
