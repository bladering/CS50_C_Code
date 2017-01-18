//
//  pointer_operator.c
//  
//
//  Created by Jimmy on 2017/1/17.
//
//

#include "pointer_operator.h"
#include <stdio.h>

int main (void)
{
    int vector[] ={28,41,7};
    int *pi ;
    pi = vector;
    printf ("%d\t%p\n", *pi,pi);  //显示28, address of *pi pointed
    pi += 1;
    printf ("%d\t%p\n", *pi,pi);   //显示41
    pi += 1;
    printf ("%d\t%p\n", *pi,pi);    //显示7
    printf ("%p\n",&pi); //display the address of *pi
    
    char * titles[] ={ "book1","book2","book3","book4","book5","book6"};
    char **bestBooks[3];
    char **englishBooks[4];
    
    bestBooks[0] = &titles[0];
    bestBooks[2] = &titles[3];
    
    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[2];
    englishBooks[2] = &titles[4];

    printf("%s\n",*englishBooks[1]);
    printf("%s\n",*englishBooks[2]);
    
    int num = 5;
    const int
    
    
}
