//
// How to compile
//
// gcc hello.c -o hello -I/usr/local/include -L/usr/local/lib -lraylib -lm
//


#include <stdio.h>
#include "raylib.h"

int main(void){
    InitWindow(640, 480, "raylib");
    while (!WindowShouldClose()){
        BeginDrawing();
        {
            ClearBackground(RAYBLACK);
            DrawCircle(100, 100, 100, RED);
            DrawText("Hello World", 320, 240, 80, LIGHTGRAY);
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
