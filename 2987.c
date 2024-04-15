#include<stdio.h>
int main()
{
    char letter;
    int position;
    scanf("%c",&letter);
    position = letter-'A'+1;
    printf("%d\n",position);

}
