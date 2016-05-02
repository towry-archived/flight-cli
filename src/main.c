#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linenoise.h"
#include "main.h"

int main(
    int argc __attribute__((unused)), 
    char **argv __attribute__((unused))) 
{
    char *line;

    while ((line = linenoise("flight> ")) != NULL) {
        if (line[0] == '.') {
            // its a subcommand
            run_sub_command(line);
        } else if (line[0] == ':') {
            // its a user defined command
            run_task_command(line);
        }
        // otherwise do nothing

        free(line);
    }
    return 0;
}
