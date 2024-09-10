#include<stdio.h>
int binarysearch(int arr[], int l, int h, int search)
{
    if (l > h)
        return -1;
    else
    {
        int mid = (l + h) / 2;
    if (arr[mid] == search)
        return mid;
    else if (arr[mid] > search)
        return binarysearch(arr, l, mid - 1, search);
    else
        return binarysearch(arr, mid + 1, h, search);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n - 1, search;
    printf("Enter search element");
    scanf("%d", &search);
    int res = binarysearch(arr, l, h, search);
    if (res != -1)
       printf("%d is found at index %d\n", search, res);
    else
       printf("%d is not found\n", search);
    return 0;
}

