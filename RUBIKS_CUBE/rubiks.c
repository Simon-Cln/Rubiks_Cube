#include <stdio.h>
#include "rubiks.h"
#include <stdlib.h>
#include <string.h>


T_SIDE get_side_from_char(char face);

char select_color(char c) {
    switch (c) {
        case R: return 'R';
        case B: return 'B';
        case G: return 'G';
        case W: return 'W';
        case Y: return 'Y';
        case O: return 'O';
        case LG: return 'L';
        default: return '*';
    }
}


int side_to_int(T_SIDE side) {
    switch (side) {
        case FRONT: return 0;
        case BACK: return 1;
        case UP: return 2;
        case DOWN: return 3;
        case RIGHT: return 4;
        case LEFT: return 5;
        default: return -1;
    }
}

void create_rubiks(T_RUBIKS *rubiks) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            rubiks->sides[FRONT][i][j] = side_to_int(FRONT);
            rubiks->sides[BACK][i][j] = side_to_int(BACK);
            rubiks->sides[UP][i][j] = side_to_int(UP);
            rubiks->sides[DOWN][i][j] = side_to_int(DOWN);
            rubiks->sides[RIGHT][i][j] = side_to_int(RIGHT);
            rubiks->sides[LEFT][i][j] = side_to_int(LEFT);
        }
    }
}


void init_rubiks(T_RUBIKS *rubiks, char *str) {
    int i, j, k;
    int index = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                rubiks->sides[i][j][k] = select_color(str[index]);
                index++;

            }
        }
    }
}





void display_rubiks(T_RUBIKS *rubiks) {
    int i, j;


    for (i = 0; i < 3; i++) {
        printf("       ");
        for (j = 0; j < 3; j++) {
            printf(" %c", select_color(rubiks->sides[W][i][j]));
        }
        printf("\n");
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c", select_color(rubiks->sides[O][i][j]));
        }
        printf(" ");
        for (j = 0; j < 3; j++) {
            printf(" %c", select_color(rubiks->sides[G][i][j]));
        }
        printf(" ");
        for (j = 0; j < 3; j++) {
            printf(" %c", select_color(rubiks->sides[R][i][j]));
        }
        printf(" ");
        for (j = 0; j < 3; j++) {
            printf(" %c", select_color(rubiks->sides[B][i][j]));
        }
        printf("\n");
    }


    for (i = 0; i < 3; i++) {
        printf("       ");
        for (j = 0; j < 3; j++) {
            printf(" %c", select_color(rubiks->sides[Y][i][j]));
        }
        printf("\n");
    }

}

T_RUBIKS * blank_rubiks(T_RUBIKS *rubiks) {
    memset(rubiks, -1, sizeof(T_RUBIKS));
}


void fill_rubiks(T_RUBIKS *rubiks) {
    int side, row, col;
    char color;
    int invalid = 0;

    printf("Veuillez entrer les couleurs du cube de Rubik :\n");

    do {
        invalid = 0;

        // Demande à l'utilisateur de préciser la face, les coordonnées de la case à modifier ainsi que la couleur à affecter
        printf("Face (0:front, 1:back, 2:up, 3:down, 4:right, 5:left) : ");
        scanf("%d", &side);
        printf("Ligne (0-2) : ");
        scanf("%d", &row);
        printf("Colonne (0-2) : ");
        scanf("%d", &col);
        printf("Couleur (R,B,G,W,Y,O) : ");
        scanf(" %c", &color);

        // Vérifie que la couleur est valide
        if (color != 'R' && color != 'B' && color != 'G' && color != 'W' && color != 'Y' && color != 'O') {
            printf("Couleur invalide ! Veuillez entrer une couleur valide (R,B,G,W,Y,O).\n");
            invalid = 1;
            continue;
        }

        // Vérifie que la combinaison de couleurs est valide
        if (row > 0 && rubiks->sides[side][row-1][col] == color) {
            printf("Combinaison de couleurs invalide ! Deux cases adjacentes ne doivent pas avoir la même couleur.\n");
            invalid = 1;
            continue;
        }
        if (row < 2 && rubiks->sides[side][row+1][col] == color) {
            printf("Combinaison de couleurs invalide ! Deux cases adjacentes ne doivent pas avoir la même couleur.\n");
            invalid = 1;
            continue;
        }
        if (col > 0 && rubiks->sides[side][row][col-1] == color) {
            printf("Combinaison de couleurs invalide ! Deux cases adjacentes ne doivent pas avoir la même couleur.\n");
            invalid = 1;
            continue;
        }
        if (col < 2 && rubiks->sides[side][row][col+1] == color) {
            printf("Combinaison de couleurs invalide ! Deux cases adjacentes ne doivent pas avoir la même couleur.\n");
            invalid = 1;
            continue;
        }

        // Affecte la couleur à la case spécifiée
        rubiks->sides[side][row][col] = color;

    } while (invalid);
}
