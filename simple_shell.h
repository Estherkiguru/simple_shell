#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
void custom_display(const char *prompt);
void prompt_display(void);
void command_exec(const char *execute);
void handle_input(void);
#endif /* SIMPLE_SHELL_H */
