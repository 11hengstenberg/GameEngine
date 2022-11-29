#include <iostream>
#include <SDL2/SDL.h>
#include "game.h"

Game::Game (){

}

Game::~Game (){
	
}

void Game::init(const char* title, int width, int height){
	std::cout << "Game Setup.." << std::endl;

	
}	
void Game::setup(){
	std::cout << "Game Setup.." << std::endl;
}
void Game::handleEvents(){
	std::cout << "HandleEvents.." << std::endl;
}
void Game::update(){
	std::cout << "Update.." << std::endl;
}
void Game::render(){
	std::cout << "Render.." << std::endl;

}
void Game::clean(){
	std::cout << "Clean.." << std::endl;
}

bool Game::running(){
	return isRunning;
}