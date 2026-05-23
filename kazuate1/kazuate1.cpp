#include "input.h"
#include"judge.h"
int main()
{
    extern bool gameClear;

    while (!gameClear)
    {
        inputNow();
        if (!gameClear)
        {
            judgeCpp();
        }
    }
    return 0;
}
   
