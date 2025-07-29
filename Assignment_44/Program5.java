/*Write a program which accept matrix from user and swap the contents of consecutive rows.
Input :   3  2  5  9
          4  3  2  2
          8  4  1  5
          3  9  7  5
Output :  4  3  2  2
          3  2  5  9
          3  9  7  5
          8  4  1  9
*/          
import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A,int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0,j = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of matrix : ");

        int i = 0,j = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void SwapRows()
    {
        int i = 0,j = 0,temp = 0;

        for(i = 0;i < Arr.length - 1;)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
            i = i + 2;
        }
        System.out.println("Swaped contents of consecutiove rows are : ");
        Display();
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        mobj.SwapRows();
    }
}