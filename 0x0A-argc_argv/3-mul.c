#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int i;
    int result = 1;
        
    if (argc > 1) {
        for (i = 1; i < argc; i++) {
            result *= atoi(argv[i]);
        }
        
        printf("%d\n", result);
    } else {
        printf("Error\n");
        return (1);
    }
    
    return (0);
}
