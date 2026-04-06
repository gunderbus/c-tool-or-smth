#include <stdio.h>
#include <stdlib.h>

// Using char board[8][9] because each row needs 8 chars + 1 hidden 'null terminator' (\0)
char board[8][9] = {
    "||||||||", "||||||||", "||||||||", "||||||||",
    "||||||||", "||||||||", "||||||||", "||||||||"
};

int placePiece(int posx, int posy, char given) {
    // FIX 1: Use single quotes '' for single characters.
    // Double quotes "" are for strings (arrays of characters).
    if(board[posx][posy] != '|') {
        return -1;
    }

    board[posx][posy] = given;
    return 0;
}

int removePeice(int posx, int posy){
    if(board[posx][posy] == '|'){
        return -1;
    }

    board[posx][posy] = '|';
    return 0;
}

void printBoard() {
    for(int i = 0; i < 8; i++) {
        // FIX 2: It's %s (percent), not /s (forward slash)
        // Adding \n so each row prints on a new line
        printf("%s\n", board[i]);
    }
}

int main() {
    // Testing the logic
    placePiece(3, 3, 'X');
    printBoard();
    return 0;
}
