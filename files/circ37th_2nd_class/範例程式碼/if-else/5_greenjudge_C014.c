/**
8888888 8888888888 ,o888888o.     8 8888 8 888888888o.      ,o888888o.    
    8 8888      8888     `88.   8 8888 8 8888    `88.    8888     `88.  
    8 8888   ,8 8888       `8.  8 8888 8 8888     `88 ,8 8888       `8. 
    8 8888   88 8888            8 8888 8 8888     ,88 88 8888           
    8 8888   88 8888            8 8888 8 8888.   ,88' 88 8888           
    8 8888   88 8888            8 8888 8 888888888P'  88 8888           
    8 8888   88 8888            8 8888 8 8888`8b      88 8888           
    8 8888   `8 8888       .8'  8 8888 8 8888 `8b.    `8 8888       .8' 
    8 8888      8888     ,88'   8 8888 8 8888   `8b.     8888     ,88'  
    8 8888       `8888888P'     8 8888 8 8888     `88.    `8888888P'    
 * file:   greenjudge_C014.c
 * author: 
 * date:   10/13, 2019
 */
#include <stdio.h>
int main()  
{
    int a, b;  
    scanf("%d%d", &a, &b);  
    if (b > a) b -= a;	//b = b - a;
    else b = a - b;
    if (b > 200) printf("%d", b * 3);
    else if (b > 20) printf("%d", b * 4);
    else printf("0");
    return 0;  
} 
