#include<stdio.h>
#include<string.h>

int mod(int n1, int n2) {
    // debugging: printf("Modding: %d / %d = %d\n", n1, n2, n1 % n2);
    return n1 % n2;
}

// recursive function?
void bin(int n) {
    char r[12] = "000000000000"; 
    int modChange[12] = {2056, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    
    for (int i = 0; i < strlen(r)-1; i++) {
        int modN = mod(n, modChange[i]);

        if (modN == n) {
            r[i] = '0'; // didn't change
        } else {
            r[i] = '1'; // did change
        }
        n = mod(n, modChange[i]); // change value of n
    }
    
    printf("Your binary number is: %s\n", r);
}

void test(int d) { // for debugging
    int choice = 0;
    printf("Please choose a mod (8, 4, 2, 1): ");
    scanf("%d", &choice);
    printf("Test: %d\n", d % choice);   
}

int main() {
    int decimal = 0;
    int cont = 1;
    
    while (cont == 1) {
        printf("Please enter a decimal for conversion: ");
        scanf("%d", &decimal); 

        bin(decimal);       
        
        // continue loop?
        printf("Would you like to enter another decimal (1 = yes, 2 = no): ");
        scanf("%d", &cont);
    }

    return 0;
}
