#include <iostream>
#include "raylib.h"


#define ScreenWidth 1200
#define ScreenHeight 800

#define MinWindowWidth 500
#define MinWindowHeight 800

#define FPS 120

int main(){
    
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(ScreenWidth, ScreenHeight, "begin");
    SetWindowMinSize(MinWindowWidth, MinWindowHeight);


    while(!WindowShouldClose()){

        


        BeginDrawing();

        ClearBackground(WHITE);

        DrawLine(10,0,10,ScreenHeight,BLACK);
        DrawLine(ScreenWidth,10,0,10,BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
