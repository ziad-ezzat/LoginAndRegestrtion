#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct login
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};

int main(void)
{
    struct login l;
    bool f;
    int active;

    printf("\nEnter the Activation: ");
    scanf("%d", &active);

    f = active;

    printf("\nEnter Username: ");
    scanf("%s", l.username);

    printf("\nEnter Password: ");
    scanf("%s", l.password);

    getchar();

    if (f)
    {
        char usernamee[30], passwordd[20];

        printf("\nPlease Enter your login credentials below\n\n");
        printf("Username:  ");
        scanf("%s", usernamee);

        printf("\nPassword: ");
        printf("\n");
        scanf("%s", passwordd);

        int r1 = strcmp(usernamee, l.username);
        int r2 = strcmp(passwordd, l.password);

        if (r1 == 0 && r2 == 0)
        {
            printf("\nSuccessful Login\n");
        }
        else
        {
            printf("\nLogin Failed\n");
        }
    }

    return 0;
}
