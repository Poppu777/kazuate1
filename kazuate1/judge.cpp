#include <stdio.h>
#include"judge.h"
extern int answer;
extern int input;
bool gameClear = false;


// answer に入っている数値と、input に入っている数値が一致していれば「一致！」と表示する
void judge()
{
    if (answer == input)
    {
        
        printf("一致している\n");
        gameClear = true;
    }
    // answer に入っている数値より、input に入っている数値の方が大きければ「大きい！」と表示する
    else if (answer < input)
    {
        printf("大きい\n");
    }
    // answer に入っている数値より、input に入っている数値の方が小さければ「小さい！」と表示する
    if (answer > input)
    {
        printf("小さい\n");
    }

    if (!gameClear)
    {
        printf("もう一度\n\n");
    }
    else
    {
        printf("ゲームクリア\n");
    }
}