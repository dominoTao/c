//
// Created by Administrator on 2020/12/19.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
bool ReadCsvFile(char* filePath)
{
    char data[100];
    FILE *fp=fopen(filePath,"r");
    if(!fp)
    {
        printf("can't open file\n");
        return false;
    }
    while(!feof(fp))
    {
        fscanf(fp,"%c",&data);
        if (data == '\0') {
            printf("%s",data);
            printf("\n");
        }else {
            putchar(data);
        }
    }
    fclose(fp);
    return true;
}

int main()
{
    ReadCsvFile("C:\\see_2020-10-13.log");
    return 0;
}