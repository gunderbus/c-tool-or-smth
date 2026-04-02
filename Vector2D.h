#ifndef VECTOR2D_H
#define VECTOR2D_H

// Defining the struct with actual integers for clarity and performance
typedef struct Vector2D {
    int x;
    int y;
} Vector2D;

/* In C, "methods" usually take a pointer to the struct
   so they know which object they are modifying.
*/

// Returns the X coordinate of a specific vector
int getX(Vector2D *v);

// Returns the Y coordinate of a specific vector
int getY(Vector2D *v);

// Updates the coordinates for a specific vector
void setPosition(Vector2D *v, int x, int y);

#endif
