/*Write a program which accept matrix from user and display addition of elements from each column.
Input :   3  2  5  9
          4  3  2  2
          8  4  1  5
          3  9  7  5
Output : 18 18 15 25
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

    public ArrayList<Integer> AddColumn()
    {
        ArrayList <Integer> iResult = new ArrayList <Integer> ();

        int i = 0,j = 0;

        for(j = 0;j < Arr[0].length;j++)
        {
            int iAdd = 0;
            for(i = 0;i < Arr.length;i++)
            {
                iAdd = iAdd + Arr[i][j];
            }
            iResult.add(iAdd);
        }
        return iResult;
    }
}

class Program4
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

        ArrayList <Integer> iRet = mobj.AddColumn();

        System.out.println("Addition of Elements from each column is : "+iRet);
    }
}