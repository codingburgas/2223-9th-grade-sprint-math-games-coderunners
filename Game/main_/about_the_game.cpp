#include <raylib.h>
#include "main-menu.h"

void aboutTheGame()
{
    const int screenWidth = 1920;
    const int screenHeight = 980;

    InitWindow(screenWidth, screenHeight, "about_the_game");
    SetTargetFPS(60);

    Color bgColor = DARKBLUE;

    // Create a rectangle for the explanation window
    Rectangle window = { (screenWidth - 1500) / 2, (screenHeight - 800) / 2, 1500, 800 };
    Rectangle backButton = { screenWidth / 2 - 100, screenHeight - 80, 200, 50 };

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(bgColor);

        DrawRectangleRec(window, LIGHTGRAY);

        DrawText("Explanations to be added.", window.x + 20, window.y + 20, 20, BLACK);

        DrawRectangleRec(backButton, RED);
        DrawText("Go back.", backButton.x + 20, backButton.y + 15, 20, WHITE);
        if (CheckCollisionPointRec(GetMousePosition(), backButton))
        {
            DrawRectangleRec(backButton, RED);
            DrawText("Go back.", backButton.x + 20, backButton.y + 15, 20, WHITE);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                mainMenu();
            }
        }

        EndDrawing();
    }

    CloseWindow();
}