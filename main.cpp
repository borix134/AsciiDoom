//here goes nothing
#include <iostream>
#include <vector>
#include "declarations.hpp"
#include <string>
std::vector<enemy> enemies;
view camera;
Player player(-4,-4);
int main(){
	enemies.push_back(enemy(0,0));
 	std::cout << title;
 	while(true){
 	for (double angle = -3.14/2; angle < 3.15; angle += .1){
 	for (int y=0; y<18; y++){
		for (int x=0; x<75; x++){
			std::cout << camera.visible[x][y];		
		}
	}
	player.angle=angle;
	camera.updatevisible(enemies,player);	
	std::cin.get();
	}
	}
	std::cout.precision(5);
	std::cout << camera.distance;
}
