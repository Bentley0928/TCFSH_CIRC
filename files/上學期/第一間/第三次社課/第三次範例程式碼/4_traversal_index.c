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
 * file:   4_traversal_index.c
 * author: nevikw29
 * date:   10/25, 2019
 */
#include <stdio.h>
int main()
{
    int arr[5] = {4, 3, 2, 1, 0};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("%d ", arr[i]);
    return 0;
}
