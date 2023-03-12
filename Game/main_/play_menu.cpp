#include "raylib.h"

void playMenu()
{
    int screenWidth = 1920;
    int screenHeight = 985;

    InitWindow(screenWidth, screenHeight, "Play - Bitwise Dictionary");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLUE);

        DrawText("Bitwise Dictionary", 650, 40, 70, WHITE);

        DrawText("Choose which game you want to play.", 550, 100, 70, WHITE);

        DrawRectangle(screenWidth / 4 - 100, screenHeight / 2 - 25, 200, 50, RED);
        DrawText("Binary", screenWidth / 4 - 80, screenHeight / 2 - 15, 20, BLACK);

        DrawRectangle(screenWidth / 2 - 100, screenHeight / 2 - 25, 200, 50, RED);
        DrawText("Octal", screenWidth / 2 - 80, screenHeight / 2 - 15, 20, BLACK);

        DrawRectangle(screenWidth * 3 / 4 - 100, screenHeight / 2 - 25, 200, 50, RED);
        DrawText("Decimal", screenWidth * 3 / 4 - 80, screenHeight / 2 - 15, 20, BLACK);

        DrawRectangle(screenWidth / 2 - 100, screenHeight * 3 / 4 - 25, 200, 50, RED);
        DrawText("Hexadecimal", screenWidth / 2 - 80, screenHeight * 3 / 4 - 15, 20, BLACK);

        EndDrawing();
    }
    CloseWindow();
}