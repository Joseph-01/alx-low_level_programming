#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int result = 1;
    int i;
    if (argc < 2) {
        printf("Error\n");
        return (1);
    }
    
    
    for (i = 1; i < argc; i++) {
        result *= atoi(argv[i]);
    }
    
    printf("%d\n", result);
    
    return (0);
}
