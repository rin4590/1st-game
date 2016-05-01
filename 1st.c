#include <stdio.h>  // printf, scanf
#include <stdlib.h> // random()


int target()
{
    return random() % 50;
}

int main(void)
{
    // 1. setting target 

    int num=0;
    int yn=0;
    printf("-------숫자 맞추기 게임을 시작합니다!!-------\n\n\n\n\n");

    int tgt = target();
    do 
    {
        
        printf("값을 입력해주세요! :");
        scanf("%d",&num);


        if(tgt == num){
            printf("정답입니다!\n");
            printf("게임을 계속하겠습니까? (1/0):");
            scanf("%d",&yn);
            if(yn==1){
                printf("게임을 종료합니다.\n");
                exit(0);
            }else{
                tgt = target();
            }
            printf("\n");
        }
        else if(tgt<num)
        {
            printf("%d는 정답보다 큽니다.\n",num);
        }
        else 
        {
            printf("%d는 정답보다 작습니다.\n",num);
        }

    }while(1);

    return 0;
}