//
// Created by Administrator on 2020/12/19.
//
#include <windows.h>
#include <stdio.h>
#define T32 3200
#define T16 1600
#define T12 1200
#define T8 800
#define T6 600
#define T4 400
#define T2 200
#define T1 100
#define Z1 262
#define Z2 294
#define Z3 330
#define Z4 350
#define Z5 393
#define Z6 441
#define Z7 495
#define G1 525
#define G2 589
#define G3 661
#define G4 700
#define G5 786
#define G6 882
#define G7 990
int main(void)
{
    int i = 0;
    while (i++<2) {
        //1
        printf("《捉泥鳅》\n");
        printf("池塘的水满了\n");
        Beep(Z6, T8);
        Beep(Z6, T6);
        Beep(Z5, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z3, T8);
        //2
        printf("雨也停了\n");
        Beep(Z5, T4);
        Beep(Z3, T4);
        Beep(Z3, T8);
        Beep(Z3, T16);
        //3
        printf("田边的溪流里\n");
        Beep(Z2, T8);
        Beep(Z2, T6);
        Beep(Z1, T2);
        Beep(Z2, T4);
        Beep(Z2, T4);
        Beep(Z5, T8);
        //4
        printf("到处都是泥鳅\n");
        Beep(Z5, T4);
        Beep(Z3, T4);
        Beep(Z3, T4);
        Beep(Z2, T4);
        Beep(Z3, T16);
        //5
        printf("天天我等着你\n");
        Beep(Z6, T8);
        Beep(Z6, T6);
        Beep(Z5, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z3, T8);
        //6
        printf("等着你捉泥鳅\n");
        Beep(Z4, T4);
        Beep(Z4, T2);
        Beep(Z4, T2);
        Beep(Z3, T4);
        Beep(Z2, T4);
        Beep(Z3, T16);
        //7
        printf("大哥哥好不好\n");
        Beep(Z5, T8);
        Beep(Z5, T6);
        Beep(Z5, T2);
        Beep(Z5, T4);
        Beep(Z5, T4);
        Beep(Z7, T8);
        //8
        printf("咱们去捉泥鳅\n");
        Beep(Z6, T4);
        Beep(Z6, T2);
        Beep(Z6, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z6, T16);
        //9
        printf("小牛的哥哥\n");
        Beep(G1, T8);
        Beep(G1, T4);
        Beep(G1, T4);
        Beep(Z7, T8);
        Beep(Z5, T8);
        //10
        printf("带着他捉泥鳅\n");
        Beep(Z6, T4);
        Beep(Z6, T2);
        Beep(Z6, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z6, T16);
        //11
        printf("大哥哥好不好\n");
        Beep(Z5, T8);
        Beep(Z5, T6);
        Beep(Z5, T2);
        Beep(Z5, T4);
        Beep(Z5, T4);
        Beep(Z7, T8);
        //12
        printf("咱们去捉泥鳅\n");
        Beep(Z6, T4);
        Beep(Z6, T2);
        Beep(Z6, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z6, T16);
        //13
        printf("小牛的哥哥\n");
        Beep(G1, T8);
        Beep(G1, T4);
        Beep(G1, T4);
        Beep(Z7, T8);
        Beep(Z5, T8);
        //14
        printf("带着他捉泥鳅\n");
        Beep(Z6, T4);
        Beep(Z6, T2);
        Beep(Z6, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z6, T16);
        //15
        printf("大哥哥好不好\n");
        Beep(Z5, T8);
        Beep(Z5, T6);
        Beep(Z5, T2);
        Beep(Z5, T4);
        Beep(Z5, T4);
        Beep(Z7, T8);
        //16
        printf("咱们去捉泥鳅\n");
        Beep(Z6, T4);
        Beep(Z6, T2);
        Beep(Z6, T2);
        Beep(Z6, T4);
        Beep(Z5, T4);
        Beep(Z6, T16);
    }
    return 0;
}