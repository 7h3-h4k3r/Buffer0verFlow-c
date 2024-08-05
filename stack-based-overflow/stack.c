#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int check_auth(char *password){
    int auth_result = 0;
    char password_auth[16];
    strcpy(password_auth,password);
    if(strcmp(password_auth,"karnan") ==0 ){
        auth_result= 1;
    }
    if(strcmp(password_auth,"bala") ==0){
        auth_result = 1;
    }
    return auth_result;
}
int main(int argc,char *argv[]){
    int check;
    if(argc<2){
        printf("Usage %s <password> ",argv[0]);
        exit(-1);
    }
    if(check_auth(argv[1])){
        printf("\n=================\n");
        printf("==Access granted=\n");
        printf("=================\n");
    }else{
        printf("\n=================\n");
        printf("==Access Denied=\n");
        printf("=================\n");
    }
}