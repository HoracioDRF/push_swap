/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: horrodri <horrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:58:42 by horrodri          #+#    #+#             */
/*   Updated: 2026/03/21 19:38:30 by horrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/**
 *  ROADMAP // comment parking
 * 
 * intra string delimiter 
 * argument delimiter
 * 
 * chop input --> feed into atoi
 * 
 * for chop
 * 
 * 
 * 
 b. validate input // error logic
 z. print logic for all commands
 0. load stacks 
 
 *. overflow, underflow, string format, arg separated list format, duplicates, non numbeers
 
 1. create the skeleton/structure for the stacks
 2. define the logic for the structure, articulate it (push/pop logic)
 3. implement the logic for all commands (11)
 4. sorting algorithm design & execution
 
 
 QUEST LIST
 // todo: over/underflow
 // todo: full string format "1 2 3 4"
 // todo: space separate values -- 1 2 3 4
 // todo: alphabetic chars / special / non numbers
 
 // TODO: return clean input
 
 // TODO: implement atoi to transform cli arguments into integers
 
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define INT_MAX 
#define INT_MIN 
#define DEBUG_MODE 0

void debugger(char *argv[]);
void argument_walker(int argc, char *argv[]);
void ft_cli_split(char *agrv[], char delimiter, int argc);
int ft_strlen(char *str);

int main (int argc, char *argv[])
{
    char delimiter = ' ';
    ft_cli_split(argv, delimiter, argc);




    if (DEBUG_MODE ==  1)
    {
        debugger(argv);
    }
    return 0;
}

/**
 * @brief takes a big string and breaks it down into terms for conversion
 * Assumes that you will always start on a char.
 */
void ft_cli_split(int argc, char *argv[], char delimiter)
{
    for(int i = 0; i < argc; i++)
    {
        int j = 0;
        while(argv[i][j] != '\0')
        {
            if (argv[i][j] == delimiter)
            {
                //malloc(sizeof(char) * n);2
                printf("HIT\n");
            }
            j++;
        }
    }
} 

/**
 * We start by assuming the str is char started, no spaces at the beggining
 * what should we if we find multiple spaces?
 */
void ft_split(char *str, char delimiter)
{
    int shelve_counter = 0;
    int shelve_count = 1;
    char *shelve_counter_iterator = str;
    int i = 0;
    int j = 0;
    
    // loop to determine how big to make the pointer array == word_counter
    while(*shelve_counter_iterator != '\0')
    {
        if (*shelve_counter_iterator == delimiter)
        {
            shelve_count++;
            shelve_counter_iterator++;
        }
        else
        {
            shelve_counter_iterator++;
        }
    }

    // create array of pointers big enough for all words
    char *pointer_array[shelve_count] = {NULL};
    
    //allocates the memory for all strings that the shelve pointers point to
    while(*str != '\0')
    {

        if (*str == delimiter)
        {
            // runs the counter an extra time to make space for the string's null terminator
            j++;
            pointer_array[i] = malloc(sizeof(char) * j);
            i++;
        }
        else
        {
            j++;
            str++;
        }
    }

    //fills the allocated space with the strings
}

int ft_strlen(char *str)
{
    int counter = 0;
     while(*str != '\0')
        {
            counter++;
            str++;
        }
    return counter;
}

void argument_walker(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        int j = 0;
        while(argv[i][j] != '\0')
        {
            j++;
        }
    }
}


// DEBUGGER
#if DEBUG_MODE
void debugger(char *argv[])
{
    printf("%p\n", &argv[1]);
    int address_print = argv + 4;
    printf("%i\n", address_print);
}
#endif
