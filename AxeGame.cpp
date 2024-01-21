/**
 * @file AxeGame.cpp
 * @brief This file contains the main entry point for the Axe Game.
 * 
 * This game is a simple introductory project for game development.
 * It uses the raylib library for graphics and input handling.
 * 
 * @author Alex McClain
 */
#include "raylib.h"

int main() {
    // Window dimesions
    int width{800};
    int height{450};
    
    // Circle coordinates & dimensions
    int circleX{200};
    int circleY{200};
    int radius{25};
    
    InitWindow(width, height, "Axe Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawCircle(circleX, circleY, radius, BLUE);
        EndDrawing();
    }
    
    return 0;
}
