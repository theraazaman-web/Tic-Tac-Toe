#include <stdio.h>

char board[3][3];

void initializeBoard() {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j] = ' ';
}

void displayBoard() {
    printf("\n  1 2 3\n");
    for(int i=0; i<3; i++) {
        printf("%d ", i+1);
        for(int j=0; j<3; j++) {
            printf("%c", board[i][j]);
            if(j<2) printf("|");
        }
        printf("\n");
        if(i<2) printf("  -+-+-\n");
    }
}

void getPlayerMove(char player) {
    int row, col;
    while(1) {
        printf("\nPlayer %c's turn\n", player);
        printf("Enter row (1-3): "); scanf("%d", &row);
        printf("Enter column (1-3): "); scanf("%d", &col);
        row--; col--;
        if(row>=0 && row<3 && col>=0 && col<3 && board[row][col]==' ') {
            board[row][col] = player; break;
        }
        printf("Invalid move! Try again.\n");
    }
}

int checkWinner() {
    for(int i=0; i<3; i++) {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ') return 1;
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' ') return 1;
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ') return 1;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ') return 1;
    return 0;
}

int checkDraw() {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(board[i][j] == ' ') return 0;
    return 1;
}

int main() {
    char currentPlayer = 'X';
    initializeBoard();
    
    while(1) {
        displayBoard();
        getPlayerMove(currentPlayer);
        
        if(checkWinner()) {
            displayBoard();
            printf("\nPlayer %c wins!\n", currentPlayer);
            break;
        } else if(checkDraw()) {
            displayBoard();
            printf("\nIt's a draw!\n");
            break;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}