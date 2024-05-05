#include<stdio.h>
void world(){
    printf("world\n");
    printf("world End\n");
}
void hello(){
    printf("Hello Start\n");
    world();
printf("Hello End\n");
}
int main(){
    printf("Main Start\n");
hello();
printf("Main End\n");
return 0;
}