#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "statum/state_machine.h"

#include "../include/om.h"

const char *full_screen = "-fs";
const char *title = "OmniMiner";

static bool load_states()
{
}

//  build entry
int main(int argc, char* argv[]) {
    bool isFullscreen = false;
    
    puts("OmniMiner 0.1.000");

    //  TODO: iterate argv
    if(argc > 1) {
        if(strcmp(argv[1], full_screen)==0) {
            isFullscreen = true;
        }
    }
    printf("fullscreen[%s]\n", isFullscreen ? "true" : "false");

    init(title, isFullscreen);
}