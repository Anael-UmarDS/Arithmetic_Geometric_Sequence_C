#include <stdio.h>
#include <math.h>
#include <string.h>

/* Write a program to create either an arithmetic or geometric sequence from a certain number till the nth or inputted number */


/* Define the functions to be made to calculate full sequences */
void geometric(int a, int r, int n);
void arithmetic(int a, int d, int n);

int main()
{
    int a, d, n, r, term, aterm, an;
    char answer[10];

    /* After creating variables and initializing their type, we begin to initialize them with values, starting from the necessary values which are the frist term (a) and the number to terms in total(n) */

    printf("What is the first term:\n");
    scanf("%d", &a);

    printf("How many terms are there in total:\n");
    scanf("%d", &n);

    printf("Do you want the Arithmetic or Geometric sequence:\n");
    scanf("%s", answer);
    
    /* We now compare the answer given by the user with the actual answers
    We first check to see if the answer is asking for an arithmetic answer or a geometric answer*/
    if(strcmp(answer, "Arithmetic") == 0)
    {
        printf("What is the difference between each term:\n");
        scanf("%d", &d);
        
        /* Since we know that the user has entered Arithmetic, we ask for the difference between each term
        as it is important for calulating each term and also necessary for calauclating the nth or last term.
        Now that the user enetred Arithmetic, we want to make sure that we are looking for the right thing.
        So we prompt the user by asking if they want the last term or they are looking for something more specific */

        printf("Do you want the last term or are you looking for something else(term or something):\n");
        scanf("%s", answer);

        /* If the user answers with the required answer "term", then the condition below is true and we calculate and print out the result.
        However, if this is not true, we then question the user even more questions trying to figure out what they want. */

        if(strcmp(answer, "term") == 0)
        {
            an = a + ((n - 1) * d);
            printf("The last term is %d\n", an);
        }
        else
        {
            printf("Do you want a specific term or the whole sequence(term or sequence):\n");
            scanf("%s", answer);

            /* We ask the user if they want a specific term or they want the whole sequence to be printed.
            If they want a specific term we ask if they want its place or simply the number located at a specific place.
            If they want the term itself, we simple calculate by asking them what the term's place is.
            By asking that, we use the information given to calculate the term.
            If the place is not give but the term itself is, then we solve for the term. */

            if(strcmp(answer, "term") == 0)
            {
                printf("Do you want its place or the term itself(place or term):\n");
                scanf("%s", answer);
                if (strcmp(answer, "term") == 0)
                {
                    printf("What is the term's placement:\n");
                    scanf("%d", &term);
                    aterm = a + ((term - 1) * d);
                    if(term == 1)
                    {
                        printf("%dst place is %d\n", term, aterm);
                    }
                    else if(term == 2)
                    {
                        printf("%dnd place is %d\n", term, aterm);
                    }
                    else if(term == 3)
                    {
                        printf("%drd place is %d\n", term, aterm);
                    }
                    else
                    {
                        printf("%dth place is %d\n", term, aterm);
                    }
                }
                else
                {
                    printf("Enter the placement's number:\n");
                    scanf("%d", &aterm);
                    term = ((aterm + a) / d) + 1;
                    if(term == 1)
                    {
                        printf("%d is at %dst place\n", aterm, term);
                    }
                    else if(term == 2)
                    {
                        printf("%d is at %dnd place\n", aterm, term);
                    }
                    else if(term == 3)
                    {
                        printf("%d is at %drd place\n", aterm, term);
                    }
                    else
                    {
                        printf("%d is at %dth place\n", aterm, term);
                    }
                }
            }
            else
            {
                arithmetic(a, d, n); //This prints the arithmetic sequence
            }
        }
    }
    else
    {
        printf("What is the common ratio:\n");
        scanf("%d", &r);

        /* Since we know that the user has entered Geometric, we ask for the common ratio between each term
        as it is important for calulating each term and also necessary for calauclating the nth or last term.
        Now that the user enetred Geometric, we want to make sure that we are looking for the right thing.
        So we prompt the useer by asking if they want the last term or they are looking for something more specific */

        printf("Do you want the last term or are you looking for something else(term or something):\n");
        scanf("%s", answer);

         /* If the user answers with the required answer "term", then the condition below is true and we calculate and print out the result.
        However, if this is not true, we then question the user even more questions trying to figure out what they want. */

        if(strcmp(answer, "term") == 0)
        {
            an = a * (pow(r, n-1));
            printf("The last term is %d\n", an);
        }
        else
        {
            /* We ask the user if they want a specific term or they want the whole sequence to be printed.
            If they want a specific term we ask if they want its place or simply the number located at a specific place.
            If they want the term itself, we simple calculate by asking them what the term's place is.
            By asking that, we use the information given to calculate the term.
            If the place is not give but the term itself is, then we solve for the term by using the log function. */

            printf("Do you want a specific term or the whole sequence(term or sequence):\n");
            scanf("%s", answer);
            if(strcmp(answer, "term") == 0)
            {
                printf("Do you want its place or the term itself(place or term):\n");
                scanf("%s", answer);
                if (strcmp(answer, "term") == 0)
                {
                    printf("Which term:\n");
                    scanf("%d", &term);
                    aterm = a * (pow(r, term - 1));
                    if(term == 1)
                    {
                        printf("%dst place is %d\n", term, aterm);
                    }
                    else if(term == 2)
                    {
                        printf("%dnd place is %d\n", term, aterm);
                    }
                    else if(term == 3)
                    {
                        printf("%drd place is %d\n", term, aterm);
                    }
                    else
                    {
                        printf("%dth place is %d\n", term, aterm);
                    }
                }
                else
                {
                    printf("Enter number:\n");
                    scanf("%d", &aterm);
                    term = log(aterm / a) / log(r) + 1;
                    if(term == 1)
                    {
                        printf("%d is at %dst place\n", aterm, term);
                    }
                    else if(term == 2)
                    {
                        printf("%d is at %dnd place\n", aterm, term);
                    }
                    else if(term == 3)
                    {
                        printf("%d is at %drd place\n", aterm, term);
                    }
                    else
                    {
                        printf("%d is at %dth place\n", aterm, term);
                    }
                }
            }
            else
            {
                geometric(a, r, n); //This prints the geometric sequence
            }
        }
    }

}

/* This function calculates the geometric sequence and prints it out
with parameters being the first term, the ratio, and the number of terms in total. */

void geometric(int a, int r, int n)
{
    int an;

    an = a * (pow(r, n-1));
    //printf("an = %d\n", an);

    printf("Sequence:\n");

    int i = a;
    for(int j = 0; j < n; j++)
    {
        i = a * (pow(r, j));
        if (i == an)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d\n", i);
    }
}


/* This function calculates the arithmetic sequence and prints it out
with parameters being the first term, the ratio, and the number of terms in total. */

void arithmetic(int a, int d, int n)
{
    int an;

    an = a + ((n - 1) * d);
    // printf("an = %d\n", an);

    printf("Sequence:\n");

    for (int i = a; i <= an;)
    {
        printf("%d\n", i);
        i += d;
    }
}