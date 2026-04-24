#include <stdio.h>
//canvas using 2D Array
int grid[20][20]; //declared as global variable

//grid size
int size=20; //declared as global variable

//Grid initialization
void InitializeGrid(){
    for (int i = 0; i < size; i++){

       for (int j = 0; j < size; j++){
        
        grid[i][j]=0; //initialized all rows and column elelments to 'zero'
        }
    }
}

//Display latest updated grid
void DisplayGrid(){
    for (int i = 0; i < size; i++){

       for (int j = 0; j < size; j++){
        if (grid[i][j]==0){

           printf("+ ",grid[i][j]); //'0' is replaced with '+' where pixels are empty
        }
        else{
           printf("%d ",grid[i][j]); //pixels filled with color 
        }
                     
      }
       printf("\n"); 
    }
}

//fill color tool
void DrawPixel(){
      int row,col,color;
      printf("Enter Row:");
      scanf("%d", &row);

      printf("Enter Column:");
      scanf("%d", &col);

      printf("Enter Color Number:");
      scanf("%d", &color);
      row--; //RowIndex-1
      col--; //ColumnIndex-1

      grid[row][col]=color;
}

//Erase Tool
void ErasePixel(){
     int row,col;
     printf("Enter Row:");
     scanf("%d", &row);

     printf("Enter Column:");
     scanf("%d", &col);
     row--; //RowIndex-1
     col--; //ColumnIndex-1

     grid[row][col]=0;
}

//FillGrid tool(fills the entire grid with one color)
void FillGrid(){
     int color;
     printf("Enter color:");
     scanf("%d", &color);

     for (int i = 0; i < size; i++)
     {
       for (int j = 0; j < size; j++){
           grid[i][j]=color;
       }
     }
}


int main() {
    InitializeGrid(); //Canvas of the PixelArt editor is ready
    int choice;
    
    while (choice!=5)
    {
       printf("---Pixel Art Editor---\n1.Display Grid\n2.Draw Pixel\n3.Erase Pixel\n4.Fill Grid\n5.Exit\n\nEnter Choice:");
       scanf("%d", &choice);

       switch (choice){
        case 1:
        DisplayGrid();
        break;

        case 2:
        DrawPixel();
        break;

        case 3:
        ErasePixel();
        break;

        case 4:
        FillGrid();
        break;

        case 5:
        return 0;

        default:
        printf("!!!!Invalid Choice.Try Again!!!!\n");
       }
       
    }

    return 0;
}
