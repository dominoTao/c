//
// Created by Administrator on 2020/12/20.
//
#include <stdio.h>

static char daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
/*将MM:dd 格式转换为 某年中的第几天*/
int dayOfYear(int year, int month, int day){
    int i, leap;
    leap = year % 4 == 0 || year % 100 == 0 && year % 400 == 0;
    for (i = 0; i < month; i++) {
        day += daytab[leap][i];
    }
    return day;
}
/*将某年中的第几天转换为MM:dd格式*/
void monthDay(int year, int yearday, int *pmonth, int *pday){
    int i, leap;
    leap = year % 4 == 0 || year % 100 == 0 && year % 400 == 0;
    for (i = 0; yearday > daytab[leap][i]; i++) {
        yearday -= daytab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
}

char *monthName(int n){
    static char *name[] = {
            "Illegal month","January","February","March","April","May",
            "June","July","August","September","October","November","December"
    };
    return (n < 1 || n > 12) ? name[0] : name[n];
}




















