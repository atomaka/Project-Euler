#include <stdio.h>

int main() {
    int[] perm = { 0, 1, 2 };

    int count = 1;
    int numPerm = 3a;

    while (count < numPerm) {
        int N = perm.Length;
        int i = N-1;
        while (perm[i - 1] >= perm[i]) {
            i = i - 1;
        }
     
        int j = N;
        while (perm[j - 1] <= perm[i - 1]) {
            j = j - 1;
        }
     
        // swap values at position i-1 and j-1
        swap(i - 1, j - 1);
     
        i++;
        j = N;
        while (i < j) {
            swap(i - 1, j - 1);
            i++;
            j--;
        }
        count++;
    }
 
    string permNum = "";
    for (int k = 0; k < perm.Length; k++) {
        permNum = permNum + perm[k];
    } 
}


private void swap(int i, int j) {
    int k = perm[i];
    perm[i] = perm[j];
    perm[j] = k;
}