#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char user_entry[100000];
    int cont;
    int i = 0;

    do {
        user_entry[i] = getchar();
        i++;
    } while (user_entry[i - 1] != '\n');

    if (user_entry[0] == '\n') {
        cont = 0;
    }
    else {
        cont = 1;
        for (i = 0; user_entry[i] != '\n'; i++) {
            if (user_entry[i] == ' ') {
                cont += 1;
            }
        }
    }
    printf("%i \n", cont);

    i = 0;
    do {
        do {
            printf("%c", user_entry[i]);
            i++;
        } while ((user_entry[i - 1] != ' ') && (user_entry[i - 1] != '\n'));
        printf("\n");
    } while (user_entry[i - 1] != '\n');

    system("PAUSE");
    return (EXIT_SUCCESS);
}