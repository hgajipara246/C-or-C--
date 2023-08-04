#include <stdio.h>
void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}
// #include <stdio.h>
// void main()
// {
//     int i, j;

//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// void main()
// {
//     int i, j,sp=15;

//     for (i = 1; i <= 5; i++)
//     {
//         for(j=1;j<=sp;j++)
//             printf(" ");
//         for (j = 1; j <= i; j++)
//             printf("* ");
//             sp--;
//         printf("\n");
//     }
//     sp+=2;
//     for (i = 4; i >= 0; i--)
//     {
//         for (j = 1; j <= sp; j++)
//             printf(" ");
//         for (j = 1; j <= i; j++)
//             printf("* ");
//         sp++;
//         printf("\n");
//     }
// }
// #include <stdio.h>
// void main()
// {
//     int i, j, sp = 15;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= sp; j++)
//             printf(" ");
//         for (j = 1; j <= i; j++)
//             printf("* ");
//         sp--;
//         printf("\n");
//     }
// }
// #include <stdio.h>
// void main()
// {
//     int i, j, sp = 15;

//     for (i = 5; i >= 0; i--)
//         {
//             for (j = 1; j <= sp; j++)
//                 printf(" ");
//             for (j = 1; j <= i; j++)
//                 printf("* ");
//             sp++;
//             printf("\n");
//         }
// }