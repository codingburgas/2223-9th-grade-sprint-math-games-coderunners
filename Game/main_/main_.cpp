#include "raylib.h"
#include "play-menu.h"
#include "learn-menu.h"

int main()
{
    const int screenWidth = 1920;
    const int screenHeight = 985;

    InitWindow(screenWidth, screenHeight, "Bitwise Dictionary");
    SetTargetFPS(60);

    Color bgColor = DARKBLUE;
    Rectangle playButton = { 500, 250, 200, 100 };
    Rectangle exitButton = { 1200, 250, 200, 100 };
    Rectangle aboutTheGameButton = { 750, 300, 400, 100 };

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(bgColor);
        DrawText("Bitwise Dictionary", 650, 40, 70, WHITE);

        DrawRectangleRec(playButton, GREEN);
        DrawText("PLAY", playButton.x + 20, playButton.y + 10, 60, WHITE);
        if (CheckCollisionPointRec(GetMousePosition(), playButton))
        {
            DrawRectangleRec(playButton, BLUE);
            DrawText("PLAY", playButton.x + 20, playButton.y + 10, 60, WHITE);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                playMenu();
            }
        }

        DrawRectangleRec(exitButton, RED);
        DrawText("LEARN", exitButton.x + 25, exitButton.y + 10, 48, WHITE);
        if (CheckCollisionPointRec(GetMousePosition(), exitButton))
        {
            DrawRectangleRec(exitButton, DARKPURPLE);
            DrawText("LEARN", exitButton.x + 25, exitButton.y + 10, 48, WHITE);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                learnMenu();
            }
        }

        DrawRectangleRec(aboutTheGameButton, GOLD);
        DrawText("ABOUT THE GAME", aboutTheGameButton.x + 25, aboutTheGameButton.y + 20, 37, WHITE);
        if (CheckCollisionPointRec(GetMousePosition(), aboutTheGameButton))
        {
            DrawRectangleRec(aboutTheGameButton, YELLOW);
            DrawText("ABOUT THE GAME", aboutTheGameButton.x + 25, aboutTheGameButton.y + 20, 37, WHITE);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {

            }
        }

        DrawText("Made by team CodeRunners", 680, 450, 40, WHITE);
        DrawText("All rights reserved, 2023", 700, 500, 40, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}