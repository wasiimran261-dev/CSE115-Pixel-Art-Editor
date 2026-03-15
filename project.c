#include <stdio.h>

int grid[20][20];
int size = 20;

void initializeGrid() {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            grid[i][j] = 0;
        }
    }
}

void displayGrid() {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

void drawPixel() {
    int row,col,color;

    printf("Enter row: ");
    scanf("%d",&row);

    printf("Enter column: ");
    scanf("%d",&col);

    printf("Enter color number: ");
    scanf("%d",&color);

    grid[row][col] = color;
}

void erasePixel() {
    int row,col;

    printf("Enter row: ");
    scanf("%d",&row);

    printf("Enter column: ");
    scanf("%d",&col);

    grid[row][col] = 0;
}

void fillGrid() {
    int color;

    printf("Enter fill color: ");
    scanf("%d",&color);

    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            grid[i][j] = color;
        }
    }
}

int main() {

    int choice;

    initializeGrid();

    while(1) {

        printf("\n--- Pixel Art Editor ---\n");
        printf("1. Display Grid\n");
        printf("2. Draw Pixel\n");
        printf("3. Erase Pixel\n");
        printf("4. Fill Grid\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1)
            displayGrid();

        else if(choice==2)
            drawPixel();

        else if(choice==3)
            erasePixel();

        else if(choice==4)
            fillGrid();

        else if(choice==5)
            break;

        else
            printf("Invalid choice\n");
    }

    return 0;
}