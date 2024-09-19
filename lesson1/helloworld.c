#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("Hello World\n"); 
    printf("Hello %s\n", argv[1]);

    int counter; 
    counter = 5;

    char* name = "John San Jose"; 

    for ( int i = 0; i < 20; i++ ) {
        counter += 1; 
    }

    printf("%d\n", counter); 
    printf("Hello %s\n", name);

    // TODO1: Make a star using printf(); 
    printf("    *\n"); 
    printf("   ***\n"); 
    printf(" *******\n"); 
    printf("   ***\n"); 
    printf("  **  **\n"); 
    printf(" *      *\n"); 

    // TODO2: Print all the even numbers from 1 - 100
    printf("------------------Solution 1--------------------\n"); 
    for(int i = 2; i < 100; i = i + 2) {
        printf("%d\n", i); 
    } 
    
    printf("------------------Solution 2--------------------\n"); 
    for(int i = 1; i < 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i); 
        }
    } 
}

































