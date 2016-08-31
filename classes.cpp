#include "declarations.hpp"
#include <math.h>
#include <cerrno>
#include <errno.h>
#include <fenv.h>
#include <iostream>
#include <cmath>
void view::updatevisible(std::vector<enemy> enemies,Player p){
	for (int x=0; x<74; x++){
		for (int y=0; y<27; y++){
			visible[x][y] = 'k';
		}
	}
	for (int y=0; y<27; y++){
		visible[74][y]='\n';
	}
	if (sizeof(enemies)>0){ //to prevent those annoying segfaults
		for (int i = 0; i < sizeof(enemies); i++){
			distance = sqrt(pow(std::abs(enemies[i].y-p.y),2) + pow(std::abs(enemies[i].x-p.x),2));
			angle = p.angle + atan2((enemies[i].y-p.y)^2,(enemies[i].x-p.x)^2);
			if(fetestexcept(FE_DIVBYZERO)){
			angle = PI/2;
			}
			if (angle > 0 && angle < PI/2){  //if camera can see enemy
				objectx = rint(distance*sin(90-angle) / sin (angle));
				if (distance < 51 && distance > 39){
					for (int y=0; y<5; y++){
						for (int x=0; x< 10; x++){
							if (x+objectx < 73){
								visible[x+objectx][y]=enemy_10[(x)+y*(11)];
							}
						}
					}
				}else if(distance < 41 && distance > 29){
					for (int y=0; y<10; y++){
						for (int x=0; x< 20; x++){
							if (x+objectx < 73){
								visible[x+objectx][y]=enemy_20[(x)+y*(21)];
							}
						}
					}				
				}else if(distance < 31 && distance > 19){
					for (int y=0; y<16; y++){
						for (int x=0; x< 30; x++){
							if (x+objectx < 73){	
								visible[x+objectx][y]=enemy_30[(x)+y*(31)];
							}
						}
					}				
				}else if(distance < 21 && distance > 9){
					for (int y=0; y<21; y++){
						for (int x=0; x< 40; x++){
							if (x+objectx < 73){
								visible[x+objectx][y]=enemy_40[(x)+y*(41)];
							}
						}
					}
				}else if(distance <11 && distance > -1){  //this is the biggest one, because its the closest
					for (int y = 0; y<27; y++){
						for (int x = (0); x<50; x++){
							if (x+objectx < 73){
								visible[x+objectx][y]=enemy_50[(x)+y*(51)];
							}
							//todo create newlines atall visibles at 24
						}
					}
				}
			}
		}
	}
}
void enemy::update(){
	switch (wlevel){
		case 1:
			w=50;
			break;
		case 2:
			w=41;
			break;
		case 3:
			w=31;
			break;
		case 4:
			w=21;
			break;
		default:
			w=10;
			break;		
	}
}
enemy::enemy(int x,int y){
		this->x = x;
		this->y = y;	
}
Player::Player(int x, int y){
	this->x = x;
	this->y = y;
}
