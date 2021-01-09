import java.io.*;
import java.util.*;

public class Main
{
    public static void Insertion_Sort(int ar[], int size)
    {
        int index = 1, i, j;
        int temp, temp2;
        
        while(index<size)
        {
            i = index;
            j = i-1;
            temp = ar[i];
            
            while(temp<ar[j] && j>=0)
            {
                ar[i] = ar[j];
                if(j==0)
                {
                    ar[j] = temp;
                    break;
                }
                else
                {
                    j--;
                    i--;
                }
            }
            index++;
        }
    }
    
    public static void main(String []args)throws IOException
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print(">Enter size of Array : ");
        int size = sc.nextInt();
        int ar[] = new int[size];
        
        System.out.println("\n>Enter the elements in Array : ");
        for(int i=0;i<size;i++)
        {
            System.out.print("\n#Enter element "+(i+1)+" : ");
            ar[i] = sc.nextInt();
        }
        
        System.out.print("\n>Entered Elements are : ");
        for(int i=0;i<size;i++)
        {
            System.out.print(ar[i]+" ");
        }
        
        System.out.println("\n\n>Insertion Sorting....\n");
        Insertion_Sort(ar,size);
        for(int i=0;i<size;i++)
        {
            System.out.print(ar[i]+" ");
        }
    }
}
