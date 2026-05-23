#include <stdio.h>


bool gameClear = false;
// answer に入っている数値と、input に入っている数値が一致していれば「一致！」と表示する
if (answer == input)
{
    //rank = 2;
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

// まずは answer と input の数値の差を計算する
int sub = answer - input;
if (sub > -3 && sub < 3 && sub != 0)
{
    //rank = 1;
    printf("惜しい\n");
}
if (!gameClear)
{
    printf("もう一度\n\n");
}
else
{
    printf("ゲームクリア\n");
}