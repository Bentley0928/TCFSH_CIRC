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
 * file:   greenjudge_C040.c
 * author: 
 * date:   10/13, 2019
 */
#include <stdio.h> 
int main()  
{  
    int a, b, m, n;  
    scanf("%d%d", &a, &b);  
    m = a;        
    n = b;
    //因為a, b經過計算後，值會改變，所以用m, n將a, b原先的值儲存起來  
    while (a % b)   //判斷式相當於：a % b > 0  
    {  
        printf("%d%%%d=%d\n", a, b, a % b);
        //程式碼：printf("%%"); 螢幕輸出：%
        int t = b;  //t用來暫存b的值  
        b = a % b;  
        a = t;  
    }
    printf("%d%%%d=%d\nGCD(%d,%d)=%d", a, b, a % b, m, n, b);
    return 0;
}  
