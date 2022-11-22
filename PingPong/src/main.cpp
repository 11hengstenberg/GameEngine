#include <iostream>
#include <game.h>
#include <SDL2/SDL.h>



Game *game = nullptr;


int main(int argc, const char * argv[]) {
  
  game = new Game();
  
  game -> init("PingPong", 800 , 800);
  game->setup();
  while(game->running())
  {
    game->handleEvents();
    game->update();
    game->render();

  }

  game->clean();
  return 0;
} 

