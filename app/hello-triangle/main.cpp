#include <raylib.h>

auto main() -> int
{
    // Initialize the window
    InitWindow(800, 600, "Hello, Raylib!");

    // Set the target frames per second
    SetTargetFPS(60);

    while (!WindowShouldClose())
    { // Main game loop
        // Start drawing
        BeginDrawing();

        // Clear the screen with a color
        ClearBackground(GRAY);

        // Draw text on the screen
        DrawTriangle(Vector2{400, 100}, Vector2{300, 300}, Vector2{500, 300}, ORANGE);

        // End drawing
        EndDrawing();
    }

    // Close the window and clean up resources
    CloseWindow();

    return 0;
}