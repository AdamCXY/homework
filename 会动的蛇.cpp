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
int snakeY[SNAKE_MAX_LENGTH]={1,1,1,1,1};//�������ͷ������
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

void snakeMove(int x,int y){

	map[snakeY[0]][snakeX[0]] = BLANK_CELL;//β����Ϊ�հ� 
	map[snakeY[snakeLength-1]][snakeX[snakeLength-1]] = SNAKE_BODY;//ԭ��ͷ��λ�ñ�Ϊ�����壨�м������*���ñ䣩 
	map[snakeY[snakeLength-1]+y][snakeX[snakeLength-1]+x] = SNAKE_HEAD;//ͷ���ƶ�����϶�ά����˼����ô�ƶ���

//�ı��¼̰���ߵ�λ�õ�����	
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
