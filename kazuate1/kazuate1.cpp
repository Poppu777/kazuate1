#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"
#include"judge.h"
int main()
{
    static bool gameClear = false;

    while (!gameClear)
    {
        inputNow();
        if (!gameClear)
        {
            judgeCpp();


        }
    }
    
}
   
