/*Write a program which accept matrix from user and one number from user and return frequency of that number.
Input : number : 9
        3  2  5  9
        4  3  2  2
        8  4  1  9
        3  9  7  5
Output : 3
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

    public int Frequency(int iNo)
    {
        int i = 0,j = 0,iCount = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                if(iNo == Arr[i][j])
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }

}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int iCol = sobj.nextInt();

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        int iRet = 0;

        iRet = mobj.Frequency(iNo);

        System.out.println("Frequency of "+iNo+" is : "+iRet);
    }
}