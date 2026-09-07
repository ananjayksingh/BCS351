#include<stdio.h>

int linearSearch(int crr[], int n, int key) {
    
    //  //Addresses of Array 
    // for (int i = 0; i < n; i++) {
    //     printf("The address of %dth crr elemet is :- %p \n", i, &crr[i]);
    // }

    for (int i = 0; i < n; i++) {
        if (crr[i] == key)
            return i; // Return index if found
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {5, 12, 7, 25, 18};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    //  //Addresses of Array 
    // for (int i = 0; i < n; i++) {
    //     printf("The address of %dth arr elemet is :- %p \n", i, &arr[i]);
    // }

    int key =25;
    // Ask the user to enter key to be searched
    printf("Enter the value of key to search:- \t");
    scanf("%i", &key);

    printf("The address of key to search:- %p \n", &key);

    int result = linearSearch(&arr[0], n, key);  

    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}

