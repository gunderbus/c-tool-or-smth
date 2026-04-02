#include "Vector2D.h"

int getX(Vector2D *v){
    return v->x;
}

int getY(Vector2D *v){
    return v->y;
}

void setPosition(Vector2D *v, int x, int y){
    v->x = x;
    v->y = y;
}
