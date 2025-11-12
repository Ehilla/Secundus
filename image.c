#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

void DrawScene(int idx)
{
    struct scene;

    //....
}

enum Lessons {
    eLesson1 = 1,
    eLesson2,
    eLesson3,
};

int main()  
{
    const int screenWidth = 1800;
    const int screenHeight = 1400;

    InitWindow(screenWidth, screenHeight, "Language program");

    Image main = LoadImage("picture/english.png");
    Texture2D english = LoadTextureFromImage(main);

    Image image1 = LoadImage("picture/fruits.jpeg");
    Texture2D fruits = LoadTextureFromImage(image1);

    Image image2 = LoadImage("picture/vegetables.jpg");
    Texture2D vegetables = LoadTextureFromImage(image2);

    Image image3 = LoadImage("picture/animals.jpg");
    Texture2D animals = LoadTextureFromImage(image3);

    Image korGram = LoadImage("picture/Koreangrammar.png");
    Texture2D koreangrammar = LoadTextureFromImage(korGram);

    InitAudioDevice();
    
   // bool showImage = false; //doesn't matter    
    Sound appleS, avocadoS, bananaS, cherryS, coconutS, lemonS, pineappleS, strawberryS, watermelonS;
    
    appleS = LoadSound("music/apple.mp3");
    avocadoS = LoadSound("music/avocado.mp3");
    bananaS = LoadSound("music/banana.mp3");
    cherryS = LoadSound("music/cherry.mp3");
    coconutS = LoadSound("music/coconut.mp3");
    lemonS = LoadSound("music/lemon.mp3");
    pineappleS = LoadSound("music/pineapple.mp3");
    strawberryS = LoadSound("music/strawberry.mp3");
    watermelonS = LoadSound("music/watermelon.mp3");

    int Gui_button_x_pos = 500;
    int Gui_button_y_pos = 300;

    Rectangle lesson1 = {screenWidth/2 - 300, 100, 550, 100 }; 
    Rectangle lesson2 = {screenWidth/2 - 300, 300, 550, 100 };
    Rectangle lesson3 = {screenWidth/2 - 300, 500, 550, 100 };
    Rectangle lesson4 = {screenWidth/2 - 300, 700, 550, 100 };
    Rectangle lesson5 = {screenWidth/2 - 300, 900, 550, 100 }; 
    
    Rectangle buttonExit = {1600, 1230, 110, 100};
    Rectangle stop = {200, 1230, 110, 100};
    Rectangle play = {350, 1230, 110, 100};

    Rectangle L1 = {0,0,1800,1400};
    Rectangle L2 = {0,0,1800,1400};
    Rectangle L3 = {0,0,1800,1400};
    Rectangle L4 = {0,0,1800,1400};
    Rectangle L5 = {0,0,1800,1400};
    
    Rectangle grammar_1 = {300, 500, 450, 100};
    Rectangle words_1 = {1000, 500, 450, 100};

    Rectangle grammar_2 = {300, 500, 450, 100};
    Rectangle words_2 = {1000, 500, 450, 100};

    Rectangle grammar_3 = {300, 500, 450, 100};
    Rectangle words_3 = {1000, 500, 450, 100};

    Rectangle grammar_4 = {300, 500, 450, 100};
    Rectangle words_4 = {1000, 500, 450, 100};

    Rectangle grammar_5 = {300, 500, 450, 100};
    Rectangle words_5 = {1000, 500, 450, 100};

    Rectangle apple = {Gui_button_x_pos + 10, Gui_button_y_pos, 50, 50};
    Rectangle avocado = {Gui_button_x_pos + 500, Gui_button_y_pos, 50, 50};
    Rectangle banana = {Gui_button_x_pos + 1050, Gui_button_y_pos, 50, 50};
    Rectangle cherry = {Gui_button_x_pos + 10, Gui_button_y_pos + 450, 50, 50};
    Rectangle coconut = {Gui_button_x_pos + 500, Gui_button_y_pos + 450, 50, 50};
    Rectangle lemon = {Gui_button_x_pos + 1050, Gui_button_y_pos + 450, 50, 50};
    Rectangle pineapple = {Gui_button_x_pos + 10, Gui_button_y_pos + 450 + 350, 50, 50};
    Rectangle strawberry = {Gui_button_x_pos + 500, Gui_button_y_pos + 450 + 350, 50, 50};
    Rectangle watermelon = {Gui_button_x_pos + 1050, Gui_button_y_pos + 450 + 350, 50, 50};

    Rectangle welcome = {1000, 500, 450, 100};

    SetTargetFPS(20);
    GuiSetStyle(DEFAULT, TEXT_SIZE, 50);
    
    int togglePict = 0; // хрень, убирающая "невидимые кнопки words/grammar"
    int toggle = 0; // toggle of exit
    int lessonId = 0; //помогает убрать эффект "невидимой кнопки Lesson" - на новой текстуре прожимаются кнопки с предыдущих
    int pictureId = 0; //отвечает за смену картинок по урокам
    
    while (!WindowShouldClose())    {

        BeginDrawing();
        ClearBackground(RAYWHITE);               
        DrawTexture(english, screenWidth/2 - english.width/2, screenHeight/2 - english.height/2 - 40, WHITE);

        if (lessonId == 0)   {   // если главное окно, то рисуем кнопки, чтоб кнопка не лежала под новой текстурой
            if ((GuiButton(lesson1, "Lesson_1")))   {
                lessonId = 1;
            }

            if ((GuiButton(lesson2, "Lesson_2")))  {
                lessonId = 2;
            }

            if ((GuiButton(lesson3, "Lesson_3")))   {
                lessonId = 3;
            }

            if ((GuiButton(lesson4, "Lesson_4")))  {
                lessonId = 4;
            }
            if ((GuiButton(lesson5, "Lesson_5")))   {
                lessonId = 5;
            }
        }
        
        else {      // иначе не рисуем кнопки Lesson
        
            if (lessonId == 1)    {     // урок первый
                
                GuiWindowBox(L1, "");
                DrawTexture(english, screenWidth / 2 - fruits.width / 2, screenHeight / 2 - fruits.height / 2, WHITE);
                GuiButton(grammar_1, "grammar");
                GuiButton(words_1, "friuts");

                toggle = 0;
                
                if (togglePict == 0)    {
                    if (GuiButton(grammar_1, "grammar")) {
                        pictureId = 1;
                        togglePict = 1;    
                    }
                }
                
                if (togglePict == 0)    {
                    if (GuiButton(words_1, "friuts")) {
                        pictureId = 2;
                        togglePict = 1;  
                    }
                }
            } 

            if (lessonId == 2) {      // урок второй
                    GuiWindowBox(L2, "");
                    DrawTexture(english, screenWidth / 2 - english.width / 2, screenHeight / 2 - english.height / 2, WHITE);
                    GuiButton(grammar_2, "grammar");
                    GuiButton(words_2, "vegetables");

                    toggle = 0;
                    
                    if (togglePict == 0) {
                        if (GuiButton(grammar_2, "grammar"))    {
                            pictureId = 3;
                            togglePict = 1;  
                        }
                    }

                    if (togglePict == 0) {
                        if (GuiButton(words_2, "vegetables"))    {
                            pictureId = 4;
                            togglePict = 1;
                        }
                    }
                }
                
                if (lessonId == 3) {       // урок третий     
                    GuiWindowBox(L3, "");
                    DrawTexture(english, screenWidth / 2 - english.width / 2, screenHeight / 2 - english.height / 2, WHITE);
                    GuiButton(grammar_3, "grammar");
                    GuiButton(words_3, "vegetables");

                    toggle = 0;
                    
                    if (togglePict == 0) {
                        if (GuiButton(grammar_3, "grammar"))    {
                            pictureId = 5;
                            togglePict = 1;
                        }
                    }

                    if (togglePict == 0) {
                        if (GuiButton(words_3, "animals"))    {
                            pictureId = 6;
                            togglePict = 1;
                        }
                    }
                }              

                if (lessonId == 4) {       // урок четвёртый
                    GuiWindowBox(L4, "");
                    DrawTexture(english, screenWidth / 2 - english.width / 2, screenHeight / 2 - english.height / 2, WHITE);
                    GuiButton(grammar_4, "grammar");
                    GuiButton(words_4, "vegetables");

                    toggle = 0;
                    
                    if (togglePict == 0) {
                        if (GuiButton(grammar_4, "grammar"))    {
                            pictureId = 3;
                            togglePict = 1;
                        }
                    }
                    
                    if (togglePict == 0) {
                        if (GuiButton(words_4, "vegetables"))    {
                            pictureId = 4;
                            togglePict = 1;  
                        }
                    }
                }    
                
                if (lessonId == 5) {         // урок пятый 
                
                    GuiWindowBox(L5, "");
                    DrawTexture(english, screenWidth / 2 - english.width / 2, screenHeight / 2 - english.height / 2, WHITE);
                    GuiButton(grammar_5, "grammar");
                    GuiButton(words_5, "sdffsddf");

                    toggle = 0;
                    
                    if (togglePict == 0) {
                        if (GuiButton(grammar_5, "grammar"))    {
                            pictureId = 1;
                            togglePict = 1;
                        }

                        if (GuiButton(words_5, "fruits")) {
                            pictureId = 2;
                            togglePict = 1;
                        }
                    }
                }
            } 
        
            
            if (pictureId == 1) {
                DrawTexture(koreangrammar, screenWidth / 2 - fruits.width / 2, screenHeight / 2 - fruits.height / 2, WHITE);
            }

            if (pictureId == 2)   {
                
                DrawTexture(fruits, screenWidth / 2 - fruits.width / 2, screenHeight / 2 - fruits.height / 2, WHITE);
                    
                    if (GuiButton(apple, "@")) {
                        PlaySound(appleS);
                    }
                    
                    if (GuiButton(avocado, "@")) {
                        PlaySound(avocadoS);
                    }
                    
                    if (GuiButton(banana, "@")) {
                        PlaySound(bananaS);
                    }

                    if (GuiButton(cherry, "@")) {
                        PlaySound(cherryS);
                    }

                    if (GuiButton(coconut, "@")) {
                        PlaySound(coconutS);
                    }

                    if (GuiButton(lemon, "@")) {
                        PlaySound(lemonS);
                    }
                    
                    if (GuiButton(pineapple, "@")) {
                        PlaySound(pineappleS);
                    }

                    if (GuiButton(strawberry, "@")) {
                        PlaySound(strawberryS);
                    }

                    if (GuiButton(watermelon, ">")) {
                        PlaySound(watermelonS);
                    }
            }   
            
            if (pictureId == 3) {
                DrawTexture(koreangrammar, screenWidth / 2 - koreangrammar.width / 2, screenHeight / 2 - koreangrammar.height / 2, WHITE);
            }
            
            if (pictureId == 4) {
                DrawTexture(vegetables, screenWidth / 2 - vegetables.width / 2, screenHeight / 2 - vegetables.height / 2, WHITE);
            }

            if (pictureId == 5) {
                DrawTexture(koreangrammar, 0, 0, WHITE);
            } 

            if (pictureId == 6) {
                DrawTexture(animals, screenWidth/2 - animals.width / 2, screenHeight / 2 - animals.height / 2, WHITE);

            } 

            if (lessonId != 0 && toggle == 0)   {   //if it's not a main window and we see words/grammar picture => draw exit button 
                if (GuiButton(buttonExit, "Exit")) {
                    lessonId = 0; 
                    pictureId = 0;
                    toggle = 1;
                    togglePict = 0;  
                }
            }   
          
    EndDrawing();        
}

    UnloadTexture(english);
    UnloadTexture(fruits);
    UnloadTexture(vegetables);
    UnloadTexture(animals);
    UnloadTexture(koreangrammar);   

    UnloadSound(appleS);
    UnloadSound(avocadoS);
    UnloadSound(bananaS);
    UnloadSound(cherryS);
    UnloadSound(coconutS);
    UnloadSound(lemonS);
    UnloadSound(pineappleS);
    UnloadSound(strawberryS);
    UnloadSound(watermelonS);    

    CloseWindow();
    CloseAudioDevice();

    return 0;
}