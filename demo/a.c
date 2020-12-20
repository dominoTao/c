//
// Created by Administrator on 2020/12/20.
//

#include <stdio.h>

#define ALLOCSIZE 10000 /*可用空间大小*/

static char allocbuf[ALLOCSIZE];/*alloc使用的存储区*/

//static char *allocp = allocbuf;/*下一个空闲位置*/
static char *allocp = &allocbuf[0];

char *alloc(int n) {/*返回指向n个字符的指针*/
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else {
        return 0;
    }
}
void afree(char *p) {/*释放p指向的存储区*/
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
/*将指针t指向的字符串复制到指针s指向的位置*/
void strcpy(char *s, char *t){
    int i = 0;
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }

    while ((s[i] = t[i]) != '\0')
        i++;

    while ((*s++ = *t++) != '\0')
        ;
    while (*s++ = *t++)
        ;
}
/*根据s按照字典顺序小于，等于或大于t的结果分别返回负整数，0，正整数  数组实现*/
int strcmp(char *s, char *t){
    int i;
    for (i = 0; s[i] == t[i]; i++) {
        if (s[i] == '\0'){
            return 0;
        }
    }
    return s[i] - t[i];
}
/*根据s按照字典顺序小于，等于或大于t的结果分别返回负整数，0，正整数    指针实现*/
int strcmp_(char *s, char *t){
    for (; *s == *t; s++, t++) {
        if (*s == '\0')
            return 0;
    }
    return *s - *t;
}



























