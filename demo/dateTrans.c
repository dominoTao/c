//
// Created by Administrator on 2020/12/20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 1000

char (*comp)(void *, void *);/*指向函数的指针*/



int regetline(char *, int);

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


/*回显命令参数*/
void printArgs(int argc, char *argv[]){
    while (--argc > 0) {/*从argv[1]开始而非argv[0]，因为argv[0]是启动改程序的程序名*/
//        printf("%s%s", *++argv, (argv > 1)?" ":"");
        printf((argc > 1) ? "%s " : "%s");
    }
    return ;
}
int regetline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
int main(int argc, char *argv[]){
    char line[MAXLINE];
    int found = 0;
    if(argc != 2) {
        printf("Usage: find pattern\n");
    }else {
        while (regetline(line, MAXLINE) > 0) {
            if (strstr(line, argv[1]) != NULL) {
                printf("%s", line);
                found++;
            }
        }
    }
    return found;
}

int numcmp(char *s1, char *s2){
    double v1, v2;
    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2) {
        return -1;
    } else if (v1 > v2) {
        return 1;
    }else {
        return 0;
    }
}

void qsort1(void *v[], int left, int right, int (*comp)(void *, void *)){
    int i,last;
    void swap(void *v[], int, int);
    if (left >= right)
        return ;
    swap(v, left,  (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right ; i++) {
        if ((*comp)(v[i], v[left]) < 0)
            swap(v, ++last, i);
    }
    swap(v, left, last);
    qsort1(v, left, last - 1, comp);
    qsort1(v, last + 1, right, comp);
}


char **argv
    argv: pointer to pointer to char;

int (*daytab)[13]
    daytab : pointer to array[13] of int;
int *daytab[13]
    daytab: array[13] of pointer to int;
void *comp()
    comp:function returning pointer to void;
void (*comp)()
    comp:pointer to function returning void;
char (*(*x())[])()
    x:function return ing pointer to array[] of pointer to function  returning char ;
char (*(*x[3])())[5]
    x:array[3] of pointer to function returning pointer to array[5] of char;








