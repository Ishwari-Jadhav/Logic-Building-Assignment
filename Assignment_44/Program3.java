/*Write a program which accept matrix from user and return largest number from both the diagonals.
Input : 3  2  5  9
        4  3  2  2
        8  4  1  9
        3  9  7  5
Output : 9
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

    public int MaxDiagonal()
    {
        int i = 0,j = 0,iMax = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                if((i == j) || (i + j == Arr.length - 1))
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }
        return iMax;
    }
}

class Program3
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

        int iRet = 0;

        iRet = mobj.MaxDiagonal();

        System.out.println("Maximum Number from both Diagonals is : "+iRet);
    }
}