#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#define ROW 3
#define COL 3

int checkerXO();

char grid[ROW][COL];

int main()
{

    char a=' ';           //Blanks space here
    int x,r,c,y=0,num=0;
    int Checkflag, x1=0;

    for(x=0;x<ROW;x++)
    {

        for(y=0;y<COL;y++)
        {
            grid[x][y]= a;  //filling the grids with a blank

            printf("%d.%d [%c]  ",x,y,grid[x][y]);
        }
        putchar('\n');
    }

    while (x1<8)
    {
        printf("X TURN\n");  // X goes first in my code
        printf("Enter Row:");
        scanf("%d",&r);
        printf("Enter Col:");
        scanf("%d",&c);
        grid[r][c]= 'X';
        x1++;
        system("cls");

       Checkflag = checkerXO();
       if(Checkflag == 1)
        break;

            for(x=0;x<ROW;x++)
        {
            for(y=0;y<COL;y++)
            {
                printf("%d.%d [%c]  ",x,y,grid[x][y]);
            }
                putchar('\n');
        }


        printf("O TURN\n");  //O's turn starts here
        printf("Enter Row:");
        scanf("%d",&r);
        printf("Enter Col:");
        scanf("%d",&c);
        grid[r][c]= 'O';
        x1++;
        system("cls");

      Checkflag = checkerXO();
       if(Checkflag == 1)
        break;

         for(x=0;x<ROW;x++)
        {

            for(y=0;y<COL;y++)
            {
            printf("%d.%d [%c]  ",x,y,grid[x][y]);
            }
            putchar('\n');
        }


    }

    return 0;
}
int checkerXO()
{
     if (grid[0][0]=='X'&&grid[0][1]=='X'&&grid[0][2]=='X')
        {
            puts("\n X WINS");
            return 1;
        }
        else if(grid[0][0]=='O'&&grid[0][1]=='O'&&grid[0][2]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

        //-----------------------------------------------------
         if (grid[1][0]=='X'&&grid[1][1]=='X'&&grid[1][2]=='X')
        {
         puts("\n X WINS");
         return 1;
        }
        else if(grid[1][0]=='O'&&grid[1][1]=='O'&&grid[1][2]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

        // -------------------------------------------------------

         if (grid[2][0]=='X'&&grid[2][1]=='X'&&grid[2][2]=='X')
        {
         puts("\n X WINS");
         return 1;
        }
        else if(grid[2][0]=='O'&&grid[2][1]=='O'&&grid[2][2]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

        //-----------------------------------------------------


         if (grid[0][0]=='X'&&grid[1][0]=='X'&&grid[2][0]=='X')
        {
            puts("\n X WINS");
            return 1;
        }
        else if(grid[0][0]=='O'&&grid[1][0]=='O'&&grid[2][0]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

        //-------------------------------------------------

         if (grid[0][1]=='X'&&grid[1][1]=='X'&&grid[2][1]=='X')
        {
            puts("\n X WINS");
            return 1;
        }
        else if(grid[0][1]=='O'&&grid[1][1]=='O'&&grid[2][1]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

        //----------------------------------------------------

         if (grid[0][2]=='X'&&grid[1][2]=='X'&&grid[2][2]=='X')
        {
            puts("\n X WINS");
            return 1;
        }
        else if(grid[0][2]=='O'&&grid[1][2]=='O'&&grid[2][2]=='O')
        {
            puts("\n O WINS");
            return 1;
        }
     //-----------------------------------------------------------

         if (grid[0][0]=='X'&&grid[1][1]=='X'&&grid[2][2]=='X')
        {
            puts("\n X WINS");
            return 1;
        }

        else if(grid[0][0]=='O'&&grid[1][1]=='O'&&grid[2][2]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

        //-----------------------------------------------------
         if (grid[2][0]=='X'&&grid[1][1]=='X'&&grid[0][2]=='X')
        {
            puts("\n X WINS");
            return 1;
        }
        else if(grid[2][0]=='O'&&grid[1][1]=='O'&&grid[0][2]=='O')
        {
            puts("\n O WINS");
            return 1;
        }

}
