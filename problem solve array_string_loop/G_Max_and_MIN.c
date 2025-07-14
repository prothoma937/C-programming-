#include <stdio.h>
#include <math.h>

void findMinMax(int arr[], int n) {
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        minVal = fmin(minVal, arr[i]);
        maxVal = fmax(maxVal, arr[i]);
    }

    printf("%d %d\n", minVal, maxVal);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, n);
    return 0;
}
