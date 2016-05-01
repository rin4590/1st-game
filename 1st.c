#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int distance(int theta){
    
    int velocity = 10; // m/s
    int time = 0;
    int g = 

    printf("theta is %d\n", theta );
    return random() % 100;
}


int target()
{
    return random() % 100;
}

int main(int argc, char **args)
{

    // 1. setting target 

    // for(int i=0; i< 10; i++){
    //     printf("target %d\n", target());
    // }

    int tgt = target();
    printf("target %d\n", tgt);

    // 2. guessing target using theta 
    while(1)
    {
        int theta=0;
        printf("input theta:");
        scanf("%d", &theta);

        int dist = distance(theta);

        printf("distance is %d!\n", dist);

        if (dist == tgt){
            printf("ok! it's correct!");
        }else{
            printf("mismatch!");
        }
    }
    return 0;
}