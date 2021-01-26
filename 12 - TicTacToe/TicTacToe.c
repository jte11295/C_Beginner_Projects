#include <stdio.h>
#include <stdbool.h>

#define PLAYER_ONE  1
#define PLAYER_TWO  2
#define ROW_MAX     3
#define COLUMN_MAX  3

void displayBoard(char board[ROW_MAX][COLUMN_MAX]);
bool isMoveValid(int player_num, char *move, char board[ROW_MAX][COLUMN_MAX]);
void updateBoard(int player_num, char board[ROW_MAX][COLUMN_MAX], int row, int column);
char checkForWin(char board[ROW_MAX][COLUMN_MAX]);
int changeTurn(int active_player);
void resetBoard(char board[ROW_MAX][COLUMN_MAX]);
void resetMove (char *current_move);



int main(void)
{
    bool is_playing = true;
    bool game_in_progress = true;
    int player_turn = PLAYER_ONE;
    char current_player_move = '0';
    char game_board [ROW_MAX][COLUMN_MAX] =    { 
                                    {'1', '2', '3'}, 
                                    {'4', '5', '6'}, 
                                    {'7', '8', '9'} 
                                };

    while(is_playing == true)
    {
        if(game_in_progress)
        {
            displayBoard(game_board);
            printf("\nIt is Player %i's Turn!\n", player_turn);
            while (!isMoveValid(player_turn, &current_player_move, game_board))
            {
                current_player_move = '0';
                printf("\nWhere would you like to move (choose a value between 1-9):");
                scanf("%c", &current_player_move);
            }
            if(checkForWin(game_board) == 'W')
            {
                displayBoard(game_board);
                game_in_progress = false;
                printf("\nPlayer %i has won!\n", player_turn);
            }
            else if(checkForWin(game_board) == 'C')
            {
                displayBoard(game_board);
                game_in_progress = false;
                printf("\nCat's Game. No one wins!\n");
            }
            else
            {
                player_turn = changeTurn(player_turn);
            }
        }
        else
        {
            char play_again = 'O';
            printf("\nWould you like to play again? (Y or N):");
            scanf("%c", &play_again);
            if(play_again == 'Y')
            {
                game_in_progress = true;
                player_turn = changeTurn(player_turn);
                resetBoard(game_board);
                resetMove(&current_player_move);
            }
            else if( play_again == 'N')
            {
                printf("\nGoodbye!\n");
                is_playing = false;
            }
            
        }
    }

    return 0;
}


void displayBoard(char board[ROW_MAX][COLUMN_MAX])
{
    printf("  %c |  %c | %c \n", board[0][0],board[0][1], board[0][2]);
    printf("----|----|----\n");
    printf("  %c |  %c | %c \n", board[1][0],board[1][1], board[1][2]);
    printf("----|----|----\n");
    printf("  %c |  %c | %c \n", board[2][0],board[2][1], board[2][2]);

    return;
}

bool isMoveValid(int player_num, char *move, char board[ROW_MAX][COLUMN_MAX])
{
    bool is_valid = false;

    for(int i = 0; i < 3; i++)
    {
       for(int j = 0; j < 3; j++)
       {
           if(*move == board[i][j]
                && ((board[i][j]!= 'X') || (board[i][j] != 'O')))
           { 
                //This means that the move entered is still free on the board
                //Set the board place to the player's identifier
                is_valid = true;
                updateBoard(player_num, board, i, j);
           }
       } 
    }
    
    if(!is_valid && *move != '0')
    {
        printf("\nPlease enter a valid move!\n");
    }

    resetMove(move);
    
    return is_valid;

}

void updateBoard(int player_num, char board[ROW_MAX][COLUMN_MAX], int row, int column)
{
    if (player_num == PLAYER_ONE)
    {
        board[row][column] = 'X';
    }
    else
    {
        board[row][column] = 'O';
    }
}

char checkForWin(char board[ROW_MAX][COLUMN_MAX])
{
    char check = 'N'; // Assume no one has won and not a cats game

    // First check how many spots are used up
    int cats_game_counter = 0;
    for(int i = 0; i < ROW_MAX; i++)
    {
       for(int j = 0; j < ROW_MAX; j++)
       {
           if( (board[i][j] == 'X')
                || (board[i][j] == 'O') )
            {
                cats_game_counter++;
            }
       } 
    }

    // Need to check for all the ways you can win
    for (int i = 0; i < ROW_MAX; i++)
    {
        // Across the row
        if ((board[i][0] == board[i][1]) 
            && (board[i][1] == board[i][2]) )
        {
            check = 'W';
            break;
        }
        // Across the column
        else if( (board[0][i] == board[1][i]) 
                && (board[0][i] == board[2][i]) )
        {
            check = 'W';
            break;
        }
        
    }
    // Across the diagonals
    if ( (board[0][0] == board[1][1] ) 
            && (board[0][0] == board[2][2]) )
    {
        check = 'W';
    }
    else if ( (board[0][2] == board[1][1] ) 
            && (board[0][2] == board[2][0]) )
    {
        check = 'W';   
    }

    // Check for Cats Game
    if (cats_game_counter == 9 && check != 'W')
    {
        check = 'C';
    }
    
    return check;
}

int changeTurn(int active_player)
{
    if (active_player == PLAYER_ONE)
    {
        active_player = PLAYER_TWO;
    }
    else
    {
        active_player = PLAYER_ONE;
    }
    
    return active_player;
}

void resetBoard(char board[ROW_MAX][COLUMN_MAX])
{
    board [0][0] = '1';
    board [0][1] = '2';
    board [0][2] = '3';
    board [1][0] = '4';
    board [1][1] = '5';
    board [1][2] = '6';
    board [2][0] = '7';
    board [2][1] = '8';
    board [2][2] = '9';

}

void resetMove (char *current_move)
{
    *current_move = '0';
}