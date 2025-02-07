#include <stdio.h>
#include <string.h>

void findComplementaryStrand(char *s, int n) {
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            s[i] = 'T';
        } else if (s[i] == 'T') {
            s[i] = 'A';
        } else if (s[i] == 'C') {
            s[i] = 'G';
        } else if (s[i] == 'G') {
            s[i] = 'C';
        }
    }
}

int main() {
    int T, N;
    char S[101]; // Maximum length of string is 100, plus one for the null character.
    
    scanf("%d", &T); // Read number of test cases.
    
    while (T--) {
        scanf("%d", &N); // Read length of the string.
        scanf("%s", S);  // Read the DNA strand.
        
        findComplementaryStrand(S, N); // Modify the string in-place.
        
        printf("%s\n", S); // Output the complementary strand.
    }
    
    return 0;
}
