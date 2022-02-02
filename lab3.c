#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define LEN 100
#define WID 80

void sort(char s[][WID], int n);
void display(char s[][WID], int n);

int main()
{
    int n, i;
    char s[LEN][WID];
    printf("Enter the count of string : ");
    scanf("%d", &n);
    printf("Enter the string one by one :\n");
    for (i = 0; i < n; i++) {
        printf("%d : ", i + 1);
        scanf(" %s", s[i]);
    }


// User enters the elements
    printf("Intial elements are as follows:\n");
    display(s, n);
    sort(s, n);
// Elements are displayed after they are sorted.
    printf("Later elements after sorting are as follows:\n");
    display(s, n);

    return 0;
}
// Sorting of the Elements
void sort(char s[][WID], int n)
{
    int i, item;
    char elem[WID];

    for (item = 1; item < n; item++) {
        strcpy(elem, s[item]);
        for (i = item; strcmpi(s[i - 1], elem) > 0 && i > 0; i--) {
            
        }
        memcpy(&s[i + 1], &s[i], (item - i) * WID);
        strcpy(s[i], elem);
    }
}
//Display the elements here
void display(char s[][WID], int n)
{

    int i;
    printf("\n\n");
    for (i = 0; i < n; i++) {
        printf("%s ", s[i]);
    }
    printf("\n\n");
}