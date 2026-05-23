#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"input.h"
//ゲームをクリアするまで繰り返し
int input;
int t = (int)time(nullptr);
int answer = t % 10;
void inputNow()
{
    scanf_s("%d", &input);
    
}
    // キーボードで押した数を変数 input に代入する
   

    // ランクを保持する変数を宣言する
    //int rank = 0;


