#include <stdio.h>
#include <stdlib.h>

char board[8][8] = {"||||||||", "||||||||", "||||||||", "||||||||", "||||||||", "||||||||", "||||||||", "||||||||", };

int placePiece(int posx, int posy, char given) {
    if(board[posx][posy] != "|"){
        return -1;
    }

    board[posx][posy] = given;

    return 0;
}

int printBoard(){
    for(int i = 0; i < 8; i++){
        printf(board[i]);
    }
}

int main() {
    printBoard();
}
