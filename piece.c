#include "piece.h"
#include "Vector2D.h"
#include <stdlib.h>

piece *createPiece(char *name, Vector2D *pos, Vector2D *givenMotions, char *image) {
    // 1. Allocate memory for the struct itself
    piece *cole = malloc(sizeof(piece));

    // 2. Check if malloc failed (e.g., out of memory)
    if (cole == NULL) {
        return NULL;
    }

    // 3. Assign values to the struct members
    cole->name = name;
    cole->pos = pos;
    cole->givenMotions = givenMotions;
    cole->image = image;

    return cole;
}

int destroyPeice(piece *WhichPeice){
    WhichPeice=NULL;
    free(WhichPeice);
    if(WhichPeice == NULL){
        return 1;
    }

    return 0;
}

Vector2D getPos(piece *WhichOne);

Vector2D *getGivenMotions(piece *WhichOne);
