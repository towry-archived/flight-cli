
#include <stdio.h>
#include <stdlib.H>
#include <string.h>
#include "linenoise.h"

const char *version = "v1.0.0";
const char *prgname = "flight-cli";

static void usage() {
    fprintf(stderr,
"%s %s\n"
"Commands:\n"
"  .clear  clear the screen\n"
"  .help   show usage\n"
"  .exit   exit the command line interface\n", 
prgname, version);
}

void run_sub_command(const char *line) {
    if (!strcmp(line, ".exit")) {
        exit(0);
    } else if (!strcmp(line, ".help")) {
        usage();
    } else if (!strcmp(line, ".cls") || !strcmp(line, ".clear")) {
        linenoiseClearScreen();
    }
}
