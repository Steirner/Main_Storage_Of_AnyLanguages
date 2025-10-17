//Author : Name: Matthew Alegre
// Section Act-2A
//Activity Name: MachineProblem
//Date Oct 17 2025
//Student Email matthewalegre4@gmail.com

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package employee.database.arrays;
import java.util.*;
public class EmployeeDatabaseArrays {
    private static String[][] employees = new String[30][3];
    private static int employeeCount = 0;
    private static final int MAX_EMPLOYEES = 30;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        System.out.println("||| Employee Database Management System |||");
        
        do {
            displayMenu();
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            scanner.nextLine(); 
            
            switch (choice) {
                case 1:
                    addEmployee(scanner);
                    break;
                case 2:
                    viewAllEmployees();
                    break;
                case 3:
                    editEmployee(scanner);
                    break;
                case 4:
                    deleteEmployee(scanner);
                    break;
                case 5:
                    searchEmployee(scanner);
                    break;
                case 6:
                    System.out.println("Exiting program. Goodbye skretttttssssssss!!");
                    break;
                default:
                    System.out.println("Invalid choice bro! Please try again.");
            }
            System.out.println();
        } while (choice != 6);
        
        scanner.close();
    }
    
    private static void displayMenu() {
        System.out.println("\n|||| Menu |||");
        System.out.println("1. Add Employee");
        System.out.println("2. View All Employees");
        System.out.println("3. Edit Employee");
        System.out.println("4. Delete Employee");
        System.out.println("5. Search Employee");
        System.out.println("6. Exit");
    }
    
    private static void addEmployee(Scanner scanner) {
        if (employeeCount >= MAX_EMPLOYEES) {
            System.out.println("Database is full bro! Cannot add more employees.");
            return;
        }
          System.out.println("\n||| Add New Employee |||");
        
        System.out.print("Enter employee name bro: ");
        String name = scanner.nextLine();
        
        System.out.print("Enter position bro: ");
        String position = scanner.nextLine();
        
        System.out.print("Enter place of work bro: ");
        String placeOfWork = scanner.nextLine();
        
        employees[employeeCount][0] = name;
        employees[employeeCount][1] = position;
        employees[employeeCount][2] = placeOfWork;
        
        employeeCount++;
        System.out.println("Employee add successfully skrrrrttttt! Total employees: " + employeeCount);
    }
    
    private static void viewAllEmployees() {
        if (employeeCount == 0) {
            System.out.println("No employees on the database.");
            return;
        }
        System.out.println("\n||| Employee Records |||");
        System.out.println("Total Employees: " + employeeCount + "|" + MAX_EMPLOYEES);
        System.out.println("===============================================================");
        System.out.printf("%-5s %-20s %-20s %-20s%n", "No.", "Name", "Position", "Place of Work");
        System.out.println("===============================================================");
        
        for (int i = 0; i < employeeCount; i++) {
            System.out.printf("%-5d %-20s %-20s %-20s%n", 
                (i + 1), 
                employees[i][0], 
                employees[i][1], 
                employees[i][2]);
        }
        System.out.println("===============================================================");
    }
    private static void editEmployee(Scanner scanner) {
        if (employeeCount == 0) {
            System.out.println("No employees in the database bro.");
            return;
        
        }
             System.out.print("Enter employee number to edit bro (1-" + employeeCount + "): ");
             int empNum = scanner.nextInt();
             scanner.nextLine(); 
        
        if (empNum < 1 || empNum > employeeCount) {
            System.out.println("Invalid employee number bro!");
            return;
        }
 
        int index = empNum - 1;
        
        System.out.println("\nCurrent Details:");
        System.out.println("Name: " + employees[index][0]);
        System.out.println("Position: " + employees[index][1]);
        System.out.println("Place of Work: " + employees[index][2]);
        
        System.out.println("\nEnter new details bro (press Enter to keep current value):");
        
        System.out.print("New name: ");
        String newName = scanner.nextLine();
        if (!newName.trim().isEmpty()) {
            employees[index][0] = newName;
        }
         System.out.print("New position: ");
        String newPosition = scanner.nextLine();
        if (!newPosition.trim().isEmpty()) {
            employees[index][1] = newPosition;
        }
        
        System.out.print("New place of work: ");
        String newPlace = scanner.nextLine();
        if (!newPlace.trim().isEmpty()) {
            employees[index][2] = newPlace;
        }
        
        System.out.println("Employee update successfully bro!");
    }
     private static void deleteEmployee(Scanner scanner) {
        if (employeeCount == 0) {
            System.out.println("No employees in the database bro.");
            return;
        }
        
         System.out.print("Enter employee number to delete bro (1-" + employeeCount + "): ");
        int empNum = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        
        if (empNum < 1 || empNum > employeeCount) {
            System.out.println("Invalid employee numberbro!");
            return;
        }
        
        int index = empNum - 1;
        
        System.out.println("\nDeleting employee bro: " + employees[index][0]);
        
        
        for (int i = index; i < employeeCount - 1; i++) {
            employees[i][0] = employees[i + 1][0];
            employees[i][1] = employees[i + 1][1];
            employees[i][2] = employees[i + 1][2];
        }
        
      
        employees[employeeCount - 1][0] = null;
        employees[employeeCount - 1][1] = null;
        employees[employeeCount - 1][2] = null;
        
        employeeCount--;
        System.out.println("Employee delete successfully bro!");
    }

     
      private static void searchEmployee(Scanner scanner) {
        if (employeeCount == 0) {
            System.out.println("No employees in the database bro.");
            return;
        }
        
        System.out.print("Enter employee name to search bro: ");
        String searchName = scanner.nextLine();
        
        boolean found = false;
        System.out.println("\n||| Search Results |||");
        
        for (int i = 0; i < employeeCount; i++) {
            if (employees[i][0].toLowerCase().contains(searchName.toLowerCase())) {
                if (!found) {
                    System.out.println("===============================================================");
                    System.out.printf("%-5s %-20s %-20s %-20s%n", "No.", "Name", "Position", "Place of Work");
                    System.out.println("===============================================================");
                }
                
                System.out.printf("%-5d %-20s %-20s %-20s%n", 
                    (i + 1), 
                    employees[i][0], 
                    employees[i][1], 
                    employees[i][2]);
                found = true;
            }
        }
        
        if (!found) {
            System.out.println("No employees found with name bro: " + searchName);
        } else {
            System.out.println("===============================================================");
        }
    }
}
// yon ganto %-5d %-20s %-20s %-20s%n para maging ganto yon result niya nakuha ko lang sa stockoverflow 
//||| Employee Records |||
//Total Employees: 1|30
//===============================================================
//No.   Name                 Position             Place of Work       
//===============================================================
//1     matthew              idk basta tulog      balanga             
//===============================================================                
        





        

  

    


