#include "input.h"
#include"judge.h"
int main()
{
    extern bool gameClear;

    while (!gameClear)
    {
        inputNow();     
        judge();  
    }
    return 0;
}