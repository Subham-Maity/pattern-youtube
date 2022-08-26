public class CodeXam
{
    public static void main(String[] args)
    {
        for(int i=-3;i<=3;i++)
        {
            for(int j=1;j<=4-Math.abs(i);j++)
            {
                System.out.print("*" + " ");
            }
            for(int j=1;j<=2*Math.abs(i);j++)
            {
                System.out.print(" " + " " );
            }
            for(int j=1;j<=4-Math.abs(i);j++)
            {
                System.out.print("*" + " ");
            }
            System.out.println();
        }
    }
}
