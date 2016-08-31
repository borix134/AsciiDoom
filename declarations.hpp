#include <vector>
extern const char * title;
extern const char * gun;
extern const char * enemy_50;
extern const char * enemy_40;
extern const char * enemy_30;
extern const char * enemy_20;
extern const char * enemy_10;
//61 x 26
//enemy5 w = 50
//enemy4 w = 41
//enemy3 w = 31
//enemy2 w = 21
//enemy1 w = 10
#define PI 3.14159265
class Player{
public:
	int x,y;
	float angle;
	Player(int x, int y);
};
class enemy{
public:
	int x,y,w,wlevel;
	void update();
	enemy(int x, int y);
};
class view{
public:
	char visible[75][28];  //27y is for text!
	//char visible[100][100];
	double distance;
	double angle;
	void updatevisible(std::vector<enemy> enemies,Player p);
	int objectx;
};
