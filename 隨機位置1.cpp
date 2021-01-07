#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char pos[5];	//座號
int i;			//給迴圈用的
int rpos[5];	//給隨機位置用的

int randpos() {
	pos[0] = 'a';
	pos[1] = 'b';
	pos[2] = 'c';
	pos[3] = 'd';
	pos[4] = 'e';	//初始化，防止空字元判斷錯誤
	rpos[0] = 10; 
	rpos[1] = 20; 
	rpos[2] = 30; 
	rpos[3] = 40; 
	rpos[4] = 50;	//初始化，解決未設置的變數皆為0 而造成判斷錯誤
	
	i = 0;			//開始迴圈前的初始化
	while (1) {
		srand(time(NULL));
		if (rpos[i] == rpos[i - 1] || rpos[i] == rpos[i - 2] || rpos[i] == rpos[i - 3] || rpos[i] == rpos[i - 4]) continue;  //防止相同位置
													//cotinue為跳過以下動作，迴圈直接進入下一圈
		pos[rpos[i]] = '1' + i;
		i++;
		if (i > 6) break;	

	}
//////////////////////////////以下為測試有無正常分配座號////////////////////////////////////
	i = 0;
	while (1) {
		printf("%c\n", pos[i]);
		i++;
		if (i >= 5) break;
	}
}

int main() {
	srand(time(NULL));	
	randpos();
	
	return 0;
}
