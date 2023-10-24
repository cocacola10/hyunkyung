#include <stdio.h>

void fn_memcpy(char *target, const char *original, size_t size);

int main(void) {
    char original[] = "Copy this!";
    char target[20];
    
    fn_memcpy(target, original, 20);
    
    printf("%s\n", target);
    
    return 0;
}

void fn_memcpy(char *target, const char *original, size_t size) {
    for (size_t k = 0; k < size; k++) {
        target[k] = original[k];
    }
}