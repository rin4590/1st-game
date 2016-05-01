#include <stdio.h>       // printf, scanf 함수 헤더파일
#include <stdlib.h>      // rand(),srand() 함수 헤더파일
#include <time.h>        // time 함수 헤더파일


int target()             //목표함수 설정
{
    srand(time(NULL));   // 난수 생성기 초기값 설정
    return  rand() % 51; // 난수 발생 0부터 50까지 
}

int main(void)
{
     

    int num=0;
    int yn=0;
    printf("-------숫자 맞추기 게임을 시작합니다!!-------\n\n\n\n\n");

    int tgt = target();
    do 
    {
        
        printf("값을 입력해주세요! (0~50) :");
        scanf("%d",&num);


        if(tgt == num){
            printf("정답입니다!\n\n");
            printf("게임을 계속하겠습니까? (0:종료,1:계속 진행) : "); 
            scanf("%d",&yn);
            if(yn==0){
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