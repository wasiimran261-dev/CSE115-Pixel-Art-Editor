#include <stdio.h>

//canvas using 2D Array
int grid[20][20]; //declared as global variable

//grid size
int size=20; //declared as global variable

//Grid initialization
void InitializeGrid(){
    
    for (int i = 0; i < size; i++){

       for (int j = 0; j < size; j++){
        
        grid[i][j]=0; //initialized all rows and column elements to 'zero'
        }
    }
}

//Display latest updated grid
void DisplayGrid(){
    for (int i = 0; i < size; i++){

       for (int j = 0; j < size; j++){
        if (grid[i][j]==0){

           printf(" + "); //'0' is replaced with '+'(where pixels are blank)
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
      printf("Enter Row(1-%d):",size);
      scanf("%d", &row);

      printf("Enter Column(1-%d):",size);
      scanf("%d", &col);

      printf("Enter Color Number:");
      scanf("%d", &color);
      row--; //RowIndex-1
      col--; //ColumnIndex-1

    //Boundary check (if user enters more than 20 or less than 1 for either rows or column,it will be invalid)
     if(row >= 0 && row < size && col >= 0 && col < size) { //here "user input row and col value" is the Decrement value(Cz of index)
         grid[row][col] = color;
    } 
    else {
    printf("!!!Invalid position!!!\n");
    }
}

//Erase Tool
void ErasePixel(){
     int row,col;
     printf("Enter Row(1-%d):",size);
     scanf("%d", &row);

     printf("Enter Column(1-%d):",size);
     scanf("%d", &col);
     row--; //RowIndex-1
     col--; //ColumnIndex-1
     
     //Boundary check (if user enters more than 20 or less than 1 for either rows or column,it will be invalid)
     if(row >= 0 && row < size && col >= 0 && col < size) { //here "user input row and col value" is the Decrement value(Cz of index)
         grid[row][col] = 0;
    } 
    else {
    printf("!!!Invalid position!!!\n");
    }
}

//FillGrid tool(fills the entire grid with one color)
void FillGrid(){
     int color;
     printf("Enter color number('0' will erase progress):");
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
    int choice=0;
    
    while (choice!=5) //loop will continue until user chooses option 5 to exit
    {
       printf("\n---Pixel Art Editor---\n1.Display Grid\n2.Draw Pixel\n3.Erase Pixel\n4.Fill Grid\n5.Exit\n\nEnter Choice:");
       scanf("%d", &choice);

       switch (choice){
        case 1: DisplayGrid(); break;

        case 2: DrawPixel(); DisplayGrid(); break;

        case 3: ErasePixel(); DisplayGrid(); break;

        case 4: FillGrid(); DisplayGrid(); break;

        case 5: return 0;

        default: printf("!!!!Invalid Choice.Try Again!!!!\n");
       }
       
    }

    return 0;
}
