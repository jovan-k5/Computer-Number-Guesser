#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int games = 0;
    int total_guesses = 0;
    int best = 0;
    int worst = 0;
    char again = 'Y';

    printf("========================================\n");
    printf("       COMPUTER NUMBER GUESSER\n");
    printf("========================================\n");

    while (toupper(again) == 'Y')
    {
        int difficulty;
        int high;

        // Choose difficulty
        do
        {
            printf("\n1. Easy (1-50)\n");
            printf("2. Hard (1-1000)\n");
            printf("> ");
            scanf("%d", &difficulty);
        }
        while (difficulty != 1 && difficulty != 2);

        high = (difficulty == 1) ? 50 : 1000;

        printf("\nThink of a number from 1 to %d.\n", high);

        // Binary search
        int low = 1;
        int guesses = 0;
        char response = ' ';

        while (response != 'C')
        {
            int middle = low + (high - low) / 2;

            printf("\nIs your number %d?\n", middle);
            printf("H = Higher | L = Lower | C = Correct\n");
            printf("> ");
            scanf(" %c", &response);

            response = toupper(response);

            if (response == 'H')
            {
                low = middle + 1;
            }
            else if (response == 'L')
            {
                high = middle - 1;
            }
            else if (response != 'C')
            {
                printf("Please enter H, L, or C.\n");
                continue;
            }

            guesses++;
        }

        printf("\nYou got it in %d guesses!\n", guesses);

        // Update statistics
        games++;
        total_guesses += guesses;

        if (best == 0 || guesses < best)
            best = guesses;

        if (guesses > worst)
            worst = guesses;

        printf("\nPlay again? (Y/N): ");
        scanf(" %c", &again);
    }

    // Final statistics
    printf("\n========================================\n");
    printf("           YOUR STATISTICS\n");
    printf("========================================\n");
    printf("Games played: %d\n", games);
    printf("Average guesses: %.1f\n", (double) total_guesses / games);
    printf("Best game: %d\n", best);
    printf("Worst game: %d\n", worst);
    printf("========================================\n");

    return 0;
}
