#include <stdio.h>
#include <ctype.h>  // toupper(), tolower(), isupper(), islower()

int main() {
    char ar[100005];
    scanf("%s", ar);

    for (int i = 0; ar[i] != '\0'; i++) {
        if (ar[i] == ',') {
            ar[i] = ' ';                                                                                                                                                        
        } else if (isupper(ar[i])) {
            ar[i] = tolower(ar[i]); 
        } else if (islower(ar[i])) {
            ar[i] = toupper(ar[i]); 
                }
    }

    printf("%s\n", ar);

    return 0;
}
