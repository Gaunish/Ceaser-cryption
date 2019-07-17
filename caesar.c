#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include <string.h>
int main(int argc, string argv[])
{
    
//Checks whether string is integer
    if(strspn(argv[1],"0123456789")==strlen(argv[1]))
     {
      int found = 1;
     }
    else
     {
        printf("Usage :./caesar key \n");
       return 0;
     }

//check if only one digit is added
    if(argc!=2)
       {
        printf("Usage :./caesar key \n");
        return 0;
       }
    
//Takes string from user
     char name[20];
     int k = atoi(argv[1]);
     printf("Enter a string:");
     scanf("%s",name);
     printf("plain text : %s ",name);
     printf("\n cipher text :");
//Ciphers string
    for(int i =0,n=strlen(name);i<n;i++)
        {
        
         if(isupper(name[i]))
            {
             char c =(char)(((name[i]+k-65)%26)+65);
             printf("%c",c);   
            } 
         if(islower(name[i]))
            {
             char v;
            v = (char)(((name[i]+k-97)%26)+97);
             printf("%c",v);   
            } 
          else
            {
            printf("%c",name[i]);  
            }
              
         } 
printf("\n");
 return 0;   
}


