#include <stdio.h>

void fn_memcpy(void *target, const void *original, size_t size);

int main(void) {
    char original[] = "Copy this!";
    char target[20];
    int originalInteger[] = {1, 3, 6, 76, 4};
    int targetInteger[5];
    
    fn_memcpy(target, original, 20);
    fn_memcpy(targetInteger, originalInteger, 5);
    
    printf("%s\n", target);
    for (int k = 0; k < 5; k++) {
        printf("%d ", targetInteger[k]);
    }
    
    return 0;
}

// <summary> memory copy function
// <parameter=target> destination to have copied values
// <parameter=original> original pointer values
void fn_memcpy(void *target, const void *original, size_t size) {
    char *targetDupplicant = (char *)target;
    char *originalDupplicant = (char *)original;

    for (size_t k = 0; k < size; k++) {
        targetDupplicant[k] = originalDupplicant[k];
    }
}