#ifndef RUBIKS_CUBE_RUBIKS_H
#define RUBIKS_CUBE_RUBIKS_H

#endif //RUBIKS_CUBE_RUBIKS_H

// Enumération des couleurs
typedef enum {R, B, G, W, Y, O, LG} T_COLOR;

// Enumération des faces
typedef enum {FRONT, BACK, UP, DOWN, RIGHT, LEFT} T_SIDE;
// Structure pour représenter une case du Rubik's cube

typedef struct T_RUBIKS {
    T_COLOR sides[6][3][3];
} T_RUBIKS;


char select_color(char c);
int side_to_int(T_SIDE side);
void create_rubiks(T_RUBIKS *rubiks);
void init_rubiks(T_RUBIKS *rubiks, char *str);
void display_rubiks(T_RUBIKS *rubiks);
T_RUBIKS * blank_rubiks(T_RUBIKS *rubiks);
void fill_rubiks(T_RUBIKS *rubiks);

