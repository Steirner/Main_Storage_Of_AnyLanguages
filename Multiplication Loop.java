import java.util.*;
public class MultiplicationTable {

    public static void main(String[] args) {
        
      Scanner input = new Scanner (System.in);
      
    System.out.print("Enter a number for multiply: ");
    
    int userinput = input.nextInt();
    
    System.out.println("Multiplication Table " + userinput + " : ");
    
    
    for(int i = 1; i <= 10; ++i)  {
        
               
        int result = userinput * i;
        
        System.out.println(userinput + " x " + i + " = " + result);
        
        
        
        
        
    }          
      
        }
    }
