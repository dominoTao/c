//
// Created by Administrator on 2020/12/19.
// 输出最长的行
//
#include <stdio.h>
/*允许输入行的最大长度*/
#define MAXLINE 1001

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);
int strLength (char s[]);


int main (){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    FILE *fp = fopen("C:\\see_2020-10-13.log","r");
    if (fp == NULL) {
        puts("不能打开文件");
        return 0;
    }
    fgets(line, MAXLINE - 1, fp);
    printf("%s\n", line);
    printf("%d\n", strLength(line));
    fgets(line, MAXLINE - 1, fp);
    printf("%s\n", line);
    printf("%d\n", strLength(line));
//    strLength(line);

//    while ((len = strLength(line)) > 0) {
//        fgets(line, MAXLINE - 1, fp);
//        if (len > max) {
//            max = len;
//            copy(longest, line);
//        }
//    }
//    if (max > 0) {
//        printf("%s", longest);
//    }
    return 0;
}
int strLength (char s[]) {
    int len;
    for(len = 0; s[len] != '\0'; len++);
    return len;
}
int getLine(char s[], int lim){
    int c, i;
    for (int i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return 0;
}
/* copy函数：将from复制到to；这里假定to足够大 */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

