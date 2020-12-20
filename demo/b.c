//
// Created by Administrator on 2020/12/20.
//
#include <stdio.h>
#include <string.h>

#define MAXLINES 5000/*进行排序的最大文本行数*/
#define MAXLEN 1000

char *lineptr[MAXLINES];/*指向文本行的指针数组*/
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);


int regetline(char line[], int maxline);
int regetline(char *, int);
char *alloc(int);
void swap(char *v[], int i, int j);

/*对输入的文本行进行排序*/
int main() {
    int nlines;/*读取的输入行数目*/

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

/*readlines函数：读取输入行*/
int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = regetline(line, MAXLEN)) > 0) {
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len - 1] = '\0';/*删除换行符*/
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines) {
    /*int i;
    for (i = 0; i < nlines; i++) {
        printf("%s\n", lineptr[i]);
    }*/
    while (nlines-- > 0) {
        printf("%s\n", *lineptr++);
    }
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

void qsort(char *v[], int left, int right) {
    int i, last;

    if (left >= right) {/*如果数组元素的个数小于2， 则返回  */
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (strcmp(v[i], v[left]) < 0) {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

void swap(char *v[], int i, int j) {
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}