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
    int circleMoveSpeed{10};

    // Axe coordinates & dimensions
    int axeX{400};
    int axeY{0};
    int axeLength{50};

    bool collisionWithAxe{false};

    int axeDirection{10}; 
    
    InitWindow(width, height, "Axe Game");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Check for loss condition
        if (collisionWithAxe)
        {
            DrawText("Game Over!", 400, 200, 20, RED);
        }
        else
        {
            // Game logic begins
            
            DrawCircle(circleX, circleY, radius, BLUE);
            // Respond to user interaction for the circle
            if (IsKeyDown(KEY_D) && circleX < width)
            {
                circleX += circleMoveSpeed;
            }
            if (IsKeyDown(KEY_A) && circleX > 0)
            {
                circleX -= circleMoveSpeed;
            }

            // Manage the Axe
            DrawRectangle(axeX, axeY, axeLength, axeLength, RED);

            // Move the axe
            axeY += axeDirection;
            if (axeY > height || axeY < 0)
            {
                axeDirection = -axeDirection;
            }

            // Game logic ends
        }

        EndDrawing();
    }
    
    return 0;
}
