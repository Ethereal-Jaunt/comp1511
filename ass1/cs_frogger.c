// Program name
//
// This program was written by [your name] (z5555555)
// on [date]
//
// TODO: Description of program

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////  CONSTANTS  /////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Provided constants
#define SIZE        9
#define TRUE        1
#define FALSE       0

// TODO: you may choose to add additional #defines here.

// Provided Enums
enum tile_type {LILLYPAD, BANK, WATER, TURTLE, LOG};

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////  STRUCTS  //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Provided structs
struct board_tile {
    enum tile_type type; // The type of piece it is (water, bank, etc.)
    int occupied;        // TRUE or FALSE based on if Frogger is there.
};

////////////////////////////////////////////////////////////////////////////////
/////////////////////////////  FUNCTION PROTOTYPES  ////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Your function prototypes here

// Prints out the current state of the board.
void print_board(struct board_tile board[SIZE][SIZE]);

////////////////////////////////////////////////////////////////////////////////
//////////////////////////  FUNCTION IMPLEMENTATIONS  //////////////////////////
////////////////////////////////////////////////////////////////////////////////

int main(void) {

    printf("Welcome to CSE Frogger!\n");
    struct board_tile game_board[SIZE][SIZE];

    // TODO (Stage 1.1) Initialise the gameboard.

    // Read user input and place turtles.
    printf("How many turtles? ");
    // TODO (Stage 1.2): Scan in the turtles, and place them on the map.

    // Start the game and print out the gameboard.
    printf("Game Started\n");
    print_board(game_board);

    printf("Enter command: ");
    // TODO (Stage 1.3): Create a command loop, to read and execute commands!

    printf("Thank you for playing CSE Frogger!\n");
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////// ADDITIONAL FUNCTIONS /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Add more functions here!


////////////////////////////////////////////////////////////////////////////////
////////////////////////////// PROVIDED FUNCTIONS //////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void print_board(struct board_tile board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            char type_char;
            if (board[row][col].occupied) {
                type_char = 'F';
            } else {
                enum tile_type type = board[row][col].type;
                if (type == LILLYPAD) {
                    type_char = 'o';
                } else if (type == BANK) {
                    type_char = 'x';
                } else if (type == WATER) {
                    type_char = '~';
                } else if (type == TURTLE) {
                    type_char = 'T';
                } else if (type == LOG) {
                    type_char = 'L';
                }
            }
            printf("%c ", type_char);
        }
        printf("\n");
    }
}
