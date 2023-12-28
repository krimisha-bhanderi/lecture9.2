#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    char username[15]; 
    char password[12]; 
 
 
    printf("Enter your username :- "); 
    scanf("%s",&username); 
 
    printf("Enter your password :- "); 
    scanf("%s",&password); 
 
    if(strcmp(username,"krimisha@gmail.com")==0)
    { 
        if(strcmp(password,"123")==0)
        { 
 
            printf("Login Successfull"); 
 
 
        }
        else
        { 
             printf("wrong password"); 
        } 
    }
    else
    { 
    printf("login invaild"); 
} 

    return 0; 
 
}
