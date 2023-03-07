#include <stdio.h>
#include "rubiks.h"


int main() {

    printf("--------------------------------------------------------------------------------\n1: Scramble     2: Reset     3: Blank       4: Play      5: Fill         6: Solve\n--------------------------------------------------------------------------------\n");
    T_RUBIKS rubiks;
    create_rubiks(&rubiks);
    //fill_rubiks(&rubiks);
    display_rubiks(&rubiks);
    blank_rubiks(&rubiks);
    printf("Voice le rubiks cube une fois grisé !\n");
    display_rubiks(blank_rubiks(&rubiks));


    return 0;
}


