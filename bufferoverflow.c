#include<stdio.h>
#include<string.h>
int main(int argc , char *argv[]){
    int var_int = 5;
    char char_two[8];
    char char_one[8];
    strcpy(char_one,"one");
    strcpy(char_two,"two");
    printf("char_one address and value @[%p] %s\n",char_one,char_one);
    printf("char_two address and value @[%p] %s\n",char_two,char_two);
    printf("var_int address and value @[%p][0x%08x] %d\n",&var_int,var_int,var_int);
    strcpy(char_one,argv[1]);
    printf("char_one address and value @[%p] %s\n",char_one,char_one);
    printf("char_two address and value @[%p] %s\n",char_two,char_two);
    printf("var_int address and value @[%p][0x%08x] %d\n",&var_int,var_int,var_int);
}