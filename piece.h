#ifndef PIECE_H
#define PIECE_H

#import "Vector2D.h"

typedef struct piece {
    char *name;
    Vector2D *pos;
    Vector2D *givenMotions;
    char *image;
} piece;

// Standardize names to 'piece'
piece *createPiece(char *name, Vector2D *pos, Vector2D *givenMotions, char *image);
int destroyPiece(piece *whichPiece);
Vector2D getPos(piece *whichOne);
Vector2D *getGivenMotions(piece *whichOne);

#endif
