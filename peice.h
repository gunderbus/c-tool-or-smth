#ifndef PEICE_H
#define PEICE_H

#import "Vector2D.h"
#import "Vector.c"

typedef struct peice{
    char *name;
    Vector2D *pos;
    Vector2D *givenMotions;
    char *image;
} peice;

peice createPeice(char name, Vector2D pos, Vector2D *givenMotions, char *image);
int destroyPeice(peice *WhichPeice);
Vector2D getPos(peice *WhichOne);
Vector2D *getGivenMotions(peice *WhichOne);

#endif
