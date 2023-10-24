#include <stdio.h>

void *fn_memcpy(void *target, const void *original, size_t size);

int main(void) {
    char original[] = "Copy this!";
    char target[11];
    int originalInteger[] = {1, 3, 6, 76, 4};
    int targetInteger[5];
    float originalFloat[] = {1.5f, 3.1f, 6.0f, 7.6f, 0.4f};
    float targetFloat[5];
    float originalDouble[] = {1.512, 3.133, 6.047, 7.602, 0.4};
    float targetDouble[5];
    
    fn_memcpy(target, original, sizeof(char) * 11);
    fn_memcpy(targetInteger, originalInteger, sizeof(int) * 5);
    fn_memcpy(targetFloat, originalFloat, sizeof(float) * 5);
    fn_memcpy(targetDouble, originalDouble, sizeof(double) * 5);
    
    printf("%s\n", target);
    for (int k = 0; k < 5; k++) {
        printf("%d ", targetInteger[k]);
    }
    printf("\n");
    for (int k = 0; k < 5; k++) {
        printf("%.1f ", targetFloat[k]);
    }
    printf("\n");
    for (int k = 0; k < 5; k++) {
        printf("%.3lf ", targetDouble[k]);
    }
    printf("\n");

    return 0;
}

// <summary> memory copy function
// <parameter=target> destination to have copied values
// <parameter=original> original pointer values
void *fn_memcpy(void *target, const void *original, size_t size) {
    char *targetDuplicant = (char *)target;
    char *originalDuplicant = (char *)original;

    for (size_t k = 0; k < size; k++) {
        targetDuplicant[k] = originalDuplicant[k];
    }
}