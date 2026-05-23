#include <stdio.h>
#include <time.h>
#include"input.h"
//ƒQ[ƒ€‚ğƒNƒŠƒA‚·‚é‚Ü‚ÅŒJ‚è•Ô‚µ
int input;
int t = (int)time(nullptr);
int answer = t % 10;
void inputNow()
{
    scanf_s("%d", &input);
    
}