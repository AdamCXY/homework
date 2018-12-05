#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

void snakeMove(int,int);//y:-1(up),1(down);x:-1(left),1(right),0(no move)

void put_money(void);

void output(void);

void gameover(void);

char map[12][13] = {"************",
                    "*XXXXH     *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "*          *",
                    "************"};


int snakeX[SNAKE_MAX_LENGTH]={1,2,3,4,5};
int snakeY[SNAKE_MAX_LENGTH]={1,1,1,1,1};//蛇身和蛇头的坐标
int snakeLength = 5;
int game = 1;//run the game

int main(void){
	while(game){
		output();
		char c;
		scanf("%c",&c);
		
		switch(c){
			case 'w':snakeMove(0,-1);break;
			case 's':snakeMove(0,1);break;
			case 'a':snakeMove(-1,0);break;
			case 'd':snakeMove(1,0);break;
		}
		
		gameover();
		system("cls");
	}
	printf("The game is over.\n");
} 

void put_money(void) {
    int i,j,k;
    i = 1 + (rand() % 9 );
    j = 1 + (rand() % 9 );
    
    for(k=0;k<snakeLength - 1;k++){
    	if(snakeX[k] == i && snakeY[k] == j){
    		put_money();
		}
	}
	map[i][j] = SNAKE_FOOD;
}


void snakeMove(int x,int y){
	if(map[snakeY[snakeLength-1]+y][snakeX[snakeLength-1]+x] == SNAKE_FOOD){
	   map[snakeY[snakeLength-1]+y][snakeX[snakeLength-1]+x] == SNAKE_HEAD;
	   map[snakeY[snakeLength-1]][snakeX[snakeLength-1]] == SNAKE_BODY;
	   snakeLength++;
//记录新的头的位置，后面的部分没变，之前头的地方变为了body	   
	   snakeY[snakeLength-1] = snakeY[snakeLength-2] + y;
	   snakeX[snakeLength-1] = snakeX[snakeLength-2] + x;
	   put_money();
	   return;
	}
	
	map[snakeY[0]][snakeX[0]] = BLANK_CELL;//尾部变为空白 
	map[snakeY[snakeLength-1]][snakeX[snakeLength-1]] = SNAKE_BODY;//原先头的位置变为了身体（中间的三个*不用变） 
	map[snakeY[snakeLength-1]+y][snakeX[snakeLength-1]+x] = SNAKE_HEAD;//头部移动，结合二维数组思考怎么移动；

//改变记录贪吃蛇的位置的数组	
	for(int i = 0;i<snakeLength-1;i++){ 
	snakeX[i] = snakeX[i+1];
	snakeY[i] = snakeY[i+1];
}

	snakeX[snakeLength-1]  += x;
	snakeY[snakeLength-1]  += y;
}



void output(void){
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}

void gameover(void){
	if(snakeX[snakeLength-1] == 11||snakeX[snakeLength-1] == 0||snakeY[snakeLength-1] == 11 || snakeY[snakeLength-1] == 0){
		game = 0;
	}
	
	for(int i=0;i<snakeLength-1;i++){
		if(map[snakeY[snakeLength-1]][snakeX[snakeLength-1]] == map[snakeY[i]][snakeX[i]]){
			game = 0;
		}
	}
}

