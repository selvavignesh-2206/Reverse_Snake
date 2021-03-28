//Algorithm Outline
#include <stdio.h>
#include <stdbool.h>

int xMovement (int diffX, int snakeX, int snakeY) {
    if (diffX > 0) {
        // Means the mouse is on the left of the snake
        for (int i=1; i<=diffX; ++i) {
            snakeX -= 1;
            printf("Snake pose: %i , %i\n", snakeX, snakeY);
        }

    } else if (diffX < 0) {
        // Means the mouse is on the right of the snake 
        for (int i=1; i<=(-diffX); ++i) {
            snakeX += 1;
            printf("Snake pose: %i , %i\n", snakeX, snakeY);
        }
    } else {
        //means X match
        printf("X match!");
    }

    return snakeX;
}

int yMovement(int diffY, int snakeX, int snakeY) {
    if (diffY > 0) {
        // Means the mouse is on the top of the snake 
        for (int i=1; i<=diffY; ++i) {
            snakeY -= 1;
            printf("Snake pose: %i , %i\n", snakeX, snakeY);
        }
    } else if (diffY < 0){
        // Means the mouse is on the right of the snake 
        for (int i=1; i<=(-diffY); ++i) {
            snakeY += 1;
            printf("Snake pose: %i , %i\n", snakeX, snakeY);
        }
    } else {
        // means Y match 
        printf("Y match!");
    }

    return snakeY;
}

int main() {

    int snakeSize = 5;
    int mouseXPose = 14;
    int mouseYPose = 3;

    int snakeX = 5;
    int snakeY = 5;

    bool closerX;
    bool closerY;

    int diffX = snakeX - mouseXPose;
    int diffY = snakeY - mouseYPose;

    printf("diffX: %i, diffY: %i\n", diffX, diffY); 

    if ((diffX > diffY) || (diffX == diffY)) {
       snakeX = xMovement(diffX, snakeX, snakeY);
       snakeY = yMovement(diffY, snakeX, snakeY);
       printf("Final Snake Pose; X: %i, Y: %i\n" , snakeX, snakeY );

    } else if (diffX < diffY) {
       snakeY = yMovement(diffY, snakeX, snakeY);
       snakeX = xMovement(diffX, snakeX, snakeY);
       printf("Final Snake Pose; X: %i, Y: %i\n" , snakeX, snakeY );       
    }

    return 0;

}

