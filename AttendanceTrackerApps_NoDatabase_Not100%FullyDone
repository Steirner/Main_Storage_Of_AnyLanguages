/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package group2_inter;




import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.text.SimpleDateFormat;

/**
 * Main class for the Attendance Tracking System
 * This system allows students to mark attendance and teachers to manage student records
 */
public class AttendanceSystem {
    // Student data storage (in-memory)
    private static ArrayList<Student> students = new ArrayList<>();
    
    // Admin password
    private static final String ADMIN_PASSWORD = "admin0987654321";
    
    // Reference to main frame to fix return bug
    private static JFrame mainFrameRef;
    
    /**
     * Main method - entry point of the application
     * @param args command line arguments
     */
    public static void main(String[] args) {
        // Set look and feel to system default
        try {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } catch (Exception e) {
            e.printStackTrace();
        }
        
        // Launch the main menu
        SwingUtilities.invokeLater(() -> {
            createAndShowMainMenu();
        });
    }
    
    /**
     * Creates and displays the main menu of the application
     * Shows two options: Student Attendance and Teacher (Admin) Panel
     */
    private static void createAndShowMainMenu() {
        // Create main frame
        JFrame mainFrame = new JFrame("Attendance Tracking System");
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mainFrame.setSize(500, 300);
        mainFrame.setLocationRelativeTo(null);
        mainFrame.setResizable(false); // Prevent resizing/fullscreen
        
        // Save reference to main frame
        mainFrameRef = mainFrame;
        
        // Create panel with a nice background color
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());
        panel.setBackground(new Color(240, 248, 255));
        
        // Title label
        JLabel titleLabel = new JLabel("Attendance Tracking System", JLabel.CENTER);
        titleLabel.setFont(new Font("Arial", Font.BOLD, 24));
        titleLabel.setForeground(new Color(70, 130, 180));
        panel.add(titleLabel, BorderLayout.NORTH);
        
        // Button panel
        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(2, 1, 10, 20));
        buttonPanel.setBorder(BorderFactory.createEmptyBorder(30, 100, 30, 100));
        buttonPanel.setOpaque(false);
        
        // Student button
        JButton studentButton = new JButton("Student Attendance Panel");
        studentButton.setFont(new Font("Arial", Font.BOLD, 16));
        studentButton.setBackground(new Color(100, 149, 237));
        studentButton.setForeground(Color.BLACK);
        studentButton.setFocusPainted(false);
        
        // Teacher/Admin button
        JButton adminButton = new JButton("Teacher (Admin) Panel");
        adminButton.setFont(new Font("Arial", Font.BOLD, 16));
        adminButton.setBackground(new Color(70, 130, 180));
        adminButton.setForeground(Color.BLACK);
        adminButton.setFocusPainted(false);
        
        // Add action listeners for buttons
        studentButton.addActionListener(e -> {
            mainFrame.setVisible(false); // Hide main frame
            showStudentPanel(mainFrame); // Show student attendance panel
        });
        
        adminButton.addActionListener(e -> {
            // Show password dialog with masked input
            JPasswordField passwordField = new JPasswordField();
            Object[] message = {"Enter admin password:", passwordField};
            
            int option = JOptionPane.showConfirmDialog(mainFrame, message, 
                "Authentication Required", JOptionPane.OK_CANCEL_OPTION, 
                JOptionPane.QUESTION_MESSAGE);
            
            if (option == JOptionPane.OK_OPTION) {
                String password = new String(passwordField.getPassword());
                
                // Check if the entered password is correct
                if (password.equals(ADMIN_PASSWORD)) {
                    mainFrame.setVisible(false); // Hide main frame
                    showAdminPanel(mainFrame); // Show admin panel
                } else {
                    JOptionPane.showMessageDialog(mainFrame, 
                        "Incorrect password!", "Authentication Failed", 
                        JOptionPane.ERROR_MESSAGE);
                }
            }
        });
        
        // Add buttons to panel
        buttonPanel.add(studentButton);
        buttonPanel.add(adminButton);
        
        panel.add(buttonPanel, BorderLayout.CENTER);
        
        // Footer
        JLabel footerLabel = new JLabel("By: Group_2_Inter_Prog", JLabel.CENTER);
        footerLabel.setForeground(new Color(70, 130, 180));
        panel.add(footerLabel, BorderLayout.SOUTH);
        
        mainFrame.add(panel);
        mainFrame.setVisible(true); // Show main frame
    }
    
    /**
     * Shows the student attendance panel
     * Allows students to enter their information and mark attendance
     * @param mainFrame reference to main frame for returning
     */
    private static void showStudentPanel(JFrame mainFrame) {
        JFrame studentFrame = new JFrame("Student Attendance");
        studentFrame.setSize(600, 400);
        studentFrame.setLocationRelativeTo(null);
        studentFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        studentFrame.setResizable(false); // Prevent resizing/fullscreen
        
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());
        panel.setBackground(new Color(240, 248, 255));
        
        // Title
        JLabel titleLabel = new JLabel("Student Attendance Form", JLabel.CENTER);
        titleLabel.setFont(new Font("Arial", Font.BOLD, 20));
        titleLabel.setForeground(new Color(70, 130, 180));
        panel.add(titleLabel, BorderLayout.NORTH);
        
        // Form panel
        JPanel formPanel = new JPanel();
        formPanel.setLayout(new GridLayout(6, 2, 10, 10));
        formPanel.setBorder(BorderFactory.createEmptyBorder(20, 50, 20, 50));
        formPanel.setOpaque(false);
        
        // ID Number
        JLabel idLabel = new JLabel("ID Number:");
        JTextField idField = new JTextField(10);
        
        // Name
        JLabel nameLabel = new JLabel("Name:");
        JTextField nameField = new JTextField(20);
        
        // Age
        JLabel ageLabel = new JLabel("Age:");
        JTextField ageField = new JTextField(5);
        
        // Section
        JLabel sectionLabel = new JLabel("Section:");
        JTextField sectionField = new JTextField(10);
        
        // Time
        JLabel timeLabel = new JLabel("Time:");
        JPanel timePanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        
        // Time input field
        JTextField timeField = new JTextField(10);
        
        // AM/PM selection
        JRadioButton amButton = new JRadioButton("AM");
        JRadioButton pmButton = new JRadioButton("PM");
        ButtonGroup timeGroup = new ButtonGroup();
        timeGroup.add(amButton);
        timeGroup.add(pmButton);
        amButton.setSelected(true); // Default to AM
        
        timePanel.add(timeField);
        timePanel.add(amButton);
        timePanel.add(pmButton);
        timePanel.setOpaque(false);
        
        // Add components to form
        formPanel.add(idLabel);
        formPanel.add(idField);
        formPanel.add(nameLabel);
        formPanel.add(nameField);
        formPanel.add(ageLabel);
        formPanel.add(ageField);
        formPanel.add(sectionLabel);
        formPanel.add(sectionField);
        formPanel.add(timeLabel);
        formPanel.add(timePanel);
        
        panel.add(formPanel, BorderLayout.CENTER);
        
        // Button panel
        JPanel buttonPanel = new JPanel();
        buttonPanel.setOpaque(false);
        
        JButton submitButton = new JButton("Submit Attendance");
        submitButton.setBackground(new Color(100, 149, 237));
        submitButton.setForeground(Color.BLACK);
        
        JButton returnButton = new JButton("Return to Main Menu");
        returnButton.setBackground(new Color(70, 130, 180));
        returnButton.setForeground(Color.BLACK);
        
        buttonPanel.add(submitButton);
        buttonPanel.add(returnButton);
        
        panel.add(buttonPanel, BorderLayout.SOUTH);
        
        // Action listeners
        submitButton.addActionListener(e -> {
            // Validate input
            if (idField.getText().trim().isEmpty() || 
                nameField.getText().trim().isEmpty() ||
                ageField.getText().trim().isEmpty() ||
                sectionField.getText().trim().isEmpty() ||
                timeField.getText().trim().isEmpty()) {
                
                JOptionPane.showMessageDialog(studentFrame, 
                    "Please fill in all fields!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate ID (numbers only)
            if (!idField.getText().trim().matches("\\d+")) {
                JOptionPane.showMessageDialog(studentFrame, 
                    "ID must contain numbers only!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate name (letters only)
            if (!nameField.getText().trim().matches("[a-zA-Z\\s]+")) {
                JOptionPane.showMessageDialog(studentFrame, 
                    "Name must contain letters only (no numbers or special characters)!", 
                    "Input Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            try {
                int age = Integer.parseInt(ageField.getText().trim());
                if (age <= 0 || age > 150) {
                    throw new NumberFormatException();
                }
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(studentFrame, "Please enter a valid age (1-150)!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate time format (numbers only)
         if (!timeField.getText().trim().matches("(0?[1-9]|1[0-2]):[0-5][0-9]")) { 
                JOptionPane.showMessageDialog(studentFrame, 
                "Time must be in 12-hour format with hours 1-12 and minutes 0-59! ", 
                "Input Error", JOptionPane.ERROR_MESSAGE); 
                 return; 
            } 
            
            // Get current date and time
            SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
            String currentTime = dateFormat.format(new Date());
            
            // Create student object
            Student student = new Student(
                idField.getText().trim(),
                nameField.getText().trim(),
                Integer.parseInt(ageField.getText().trim()),
                sectionField.getText().trim(),
                timeField.getText().trim() + " " + (amButton.isSelected() ? "AM" : "PM"),
                currentTime,
                "Present" // Default status
            );
            
            // Add to list
            students.add(student);
            
            // Show confirmation
            StringBuilder message = new StringBuilder();
            message.append("Attendance Recorded Successfully!\n\n");
            message.append("ID Number: ").append(student.getId()).append("\n");
            message.append("Name: ").append(student.getName()).append("\n");
            message.append("Age: ").append(student.getAge()).append("\n");
            message.append("Section: ").append(student.getSection()).append("\n");
            message.append("Time: ").append(student.getTimeOfDay()).append("\n");
            message.append("Date/Time: ").append(student.getDateTime()).append("\n");
            message.append("Status: ").append(student.getStatus());
            
            JOptionPane.showMessageDialog(studentFrame, message.toString(), 
                "Attendance Confirmation", JOptionPane.INFORMATION_MESSAGE);
            
            // Clear fields for next entry
            idField.setText("");
            nameField.setText("");
            ageField.setText("");
            sectionField.setText("");
            timeField.setText("");
            amButton.setSelected(true); // Reset to AM
        });
        
        returnButton.addActionListener(e -> {
            studentFrame.dispose(); // Close student frame
            mainFrameRef.setVisible(true); // Show main frame
        });
        
        // Window listener to show main frame when student frame is closed
        studentFrame.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                mainFrameRef.setVisible(true); // Show main frame
            }
        });
        
        studentFrame.add(panel);
        studentFrame.setVisible(true); // Show student frame
    }
    
    /**
     * Shows the admin panel for teachers
     * Allows viewing, adding, editing, and deleting student records
     * @param mainFrame reference to main frame for returning
     */
    private static void showAdminPanel(JFrame mainFrame) {
        JFrame adminFrame = new JFrame("Teacher (Admin) Panel");
        adminFrame.setSize(800, 500);
        adminFrame.setLocationRelativeTo(null);
        adminFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        adminFrame.setResizable(false); // Prevent resizing/fullscreen
        
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());
        panel.setBackground(new Color(240, 248, 255));
        
        // Title
        JLabel titleLabel = new JLabel("Teacher (Admin) Panel", JLabel.CENTER);
        titleLabel.setFont(new Font("Arial", Font.BOLD, 20));
        titleLabel.setForeground(new Color(70, 130, 180));
        panel.add(titleLabel, BorderLayout.NORTH);
        
        // Create table model
        String[] columnNames = {"ID", "Name", "Age", "Section", "Time", "Date/Time", "Status"};
        Object[][] data = new Object[students.size()][7];
        
        // Populate table data from students list
        for (int i = 0; i < students.size(); i++) {
            Student s = students.get(i);
            data[i][0] = s.getId();
            data[i][1] = s.getName();
            data[i][2] = s.getAge();
            data[i][3] = s.getSection();
            data[i][4] = s.getTimeOfDay();
            data[i][5] = s.getDateTime();
            data[i][6] = s.getStatus();
        }
        
        JTable studentTable = new JTable(data, columnNames);
        JScrollPane scrollPane = new JScrollPane(studentTable);
        panel.add(scrollPane, BorderLayout.CENTER);
        
        // Button panel
        JPanel buttonPanel = new JPanel();
        buttonPanel.setOpaque(false);
        
        JButton addButton = new JButton("Add Student");
        addButton.setBackground(new Color (100, 149, 237));
        addButton.setForeground(Color.BLACK);
        
        JButton editButton = new JButton("Edit Selected");
        editButton.setBackground(new Color(70, 130, 180));
        editButton.setForeground(Color.BLACK);
        
        JButton deleteButton = new JButton("Delete Selected");
        deleteButton.setBackground(new Color(220, 20, 60));
        deleteButton.setForeground(Color.BLACK);
        
        JButton returnButton = new JButton("Return to Main Menu");
        returnButton.setBackground(new Color(70, 130, 180));
        returnButton.setForeground(Color.BLACK);
        
        buttonPanel.add(addButton);
        buttonPanel.add(editButton);
        buttonPanel.add(deleteButton);
        buttonPanel.add(returnButton);
        
        panel.add(buttonPanel, BorderLayout.SOUTH);
        
        // Action listeners for admin panel buttons
        addButton.addActionListener(e -> {
            showAddStudentDialog(adminFrame); // Show dialog to add a new student
            
            // Refresh table after adding a student
            refreshAdminTable(adminFrame);
        });
        
        editButton.addActionListener(e -> {
            int selectedRow = studentTable.getSelectedRow(); // Get selected row index
            if (selectedRow >= 0 && selectedRow < students.size()) {
                showEditStudentDialog(adminFrame, students.get(selectedRow)); // Show dialog to edit selected student
                
                // Refresh table after editing a student
                refreshAdminTable(adminFrame);
            } else {
                JOptionPane.showMessageDialog(adminFrame, 
                    "Please select a student to edit!", "Selection Required", 
                    JOptionPane.WARNING_MESSAGE);
            }
        });
        
        deleteButton.addActionListener(e -> {
            int selectedRow = studentTable.getSelectedRow(); // Get selected row index
            if (selectedRow >= 0 && selectedRow < students.size()) {
                int confirm = JOptionPane.showConfirmDialog(adminFrame,
                    "Are you sure you want to delete this student record?",
                    "Confirm Deletion", JOptionPane.YES_NO_OPTION);
                
                if (confirm == JOptionPane.YES_OPTION) {
                    students.remove(selectedRow); // Remove selected student from the list
                    refreshAdminTable(adminFrame); // Refresh table after deletion
                }
            } else {
                JOptionPane.showMessageDialog(adminFrame, 
                    "Please select a student to delete!", "Selection Required", 
                    JOptionPane.WARNING_MESSAGE);
            }
        });
        
        returnButton.addActionListener(e -> {
            adminFrame.dispose(); // Close admin frame
            mainFrameRef.setVisible(true); // Show main frame
        });
        
        // Window listener to show main frame when admin frame is closed
        adminFrame.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                mainFrameRef.setVisible(true); // Show main frame
            }
        });
        
        adminFrame.add(panel);
        adminFrame.setVisible(true); // Show admin frame
    }
    
    /**
     * Refreshes the admin table to show updated student data
     * @param adminFrame reference to admin frame to refresh
     */
    private static void refreshAdminTable(JFrame adminFrame) {
        // Store the location of the current frame
        Point location = adminFrame.getLocation();
        
        // Dispose the current frame
        adminFrame.dispose();
        
        // Create a new admin frame at the same location
        JFrame newAdminFrame = new JFrame("Teacher (Admin) Panel");
        newAdminFrame.setSize(800, 500);
        newAdminFrame.setLocation(location);
        newAdminFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        newAdminFrame.setResizable(false); // Prevent resizing/fullscreen
        
        // Show the admin panel in the new frame
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());
        panel.setBackground(new Color(240, 248, 255));
        
        // Title
        JLabel titleLabel = new JLabel("Teacher (Admin) Panel", JLabel.CENTER);
        titleLabel.setFont(new Font("Arial", Font.BOLD, 20));
        titleLabel.setForeground(new Color(70, 130, 180));
        panel.add(titleLabel, BorderLayout.NORTH);
        
        // Create table model
        String[] columnNames = {"ID", "Name", "Age", "Section", "Time", "Date/Time", "Status"};
        Object[][] data = new Object[students.size()][7];
        
        // Populate table data from students list
        for (int i = 0; i < students.size(); i++) {
            Student s = students.get(i);
            data[i][0] = s.getId();
            data[i][1] = s.getName();
            data[i][2] = s.getAge();
            data[i][3] = s.getSection();
            data[i][4] = s.getTimeOfDay();
            data[i][5] = s.getDateTime();
            data[i][ 6] = s.getStatus();
        }
        
        JTable studentTable = new JTable(data, columnNames);
        JScrollPane scrollPane = new JScrollPane(studentTable);
        panel.add(scrollPane, BorderLayout.CENTER);
        
        // Button panel
        JPanel buttonPanel = new JPanel();
        buttonPanel.setOpaque(false);
        
        JButton addButton = new JButton("Add Student");
        addButton.setBackground(new Color(100, 149, 237));
        addButton.setForeground(Color.BLACK);
        
        JButton editButton = new JButton("Edit Selected");
        editButton.setBackground(new Color(70, 130, 180));
        editButton.setForeground(Color.BLACK);
        
        JButton deleteButton = new JButton("Delete Selected");
        deleteButton.setBackground(new Color(220, 20, 60));
        deleteButton.setForeground(Color.BLACK);
        
        JButton returnButton = new JButton("Return to Main Menu");
        returnButton.setBackground(new Color(70, 130, 180));
        returnButton.setForeground(Color.BLACK);
        
        buttonPanel.add(addButton);
        buttonPanel.add(editButton);
        buttonPanel.add(deleteButton);
        buttonPanel.add(returnButton);
        
        panel.add(buttonPanel, BorderLayout.SOUTH);
        
        // Action listeners for admin panel buttons
        addButton.addActionListener(e -> {
            showAddStudentDialog(newAdminFrame); // Show dialog to add a new student
            refreshAdminTable(newAdminFrame); // Refresh table after adding a student
        });
        
        editButton.addActionListener(e -> {
            int selectedRow = studentTable.getSelectedRow(); // Get selected row index
            if (selectedRow >= 0 && selectedRow < students.size()) {
                showEditStudentDialog(newAdminFrame, students.get(selectedRow)); // Show dialog to edit selected student
                refreshAdminTable(newAdminFrame); // Refresh table after editing a student
            } else {
                JOptionPane.showMessageDialog(newAdminFrame, 
                    "Please select a student to edit!", "Selection Required", 
                    JOptionPane.WARNING_MESSAGE);
            }
        });
        
        deleteButton.addActionListener(e -> {
            int selectedRow = studentTable.getSelectedRow(); // Get selected row index
            if (selectedRow >= 0 && selectedRow < students.size()) {
                int confirm = JOptionPane.showConfirmDialog(newAdminFrame,
                    "Are you sure you want to delete this student record?",
                    "Confirm Deletion", JOptionPane.YES_NO_OPTION);
                
                if (confirm == JOptionPane.YES_OPTION) {
                    students.remove(selectedRow); // Remove selected student from the list
                    refreshAdminTable(newAdminFrame); // Refresh table after deletion
                }
            } else {
                JOptionPane.showMessageDialog(newAdminFrame, 
                    "Please select a student to delete!", "Selection Required", 
                    JOptionPane.WARNING_MESSAGE);
            }
        });
        
        returnButton.addActionListener(e -> {
            newAdminFrame.dispose(); // Close admin frame
            mainFrameRef.setVisible(true); // Show main frame
        });
        
        // Window listener to show main frame when admin frame is closed
        newAdminFrame.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                mainFrameRef.setVisible(true); // Show main frame
            }
        });
        
        newAdminFrame.add(panel);
        newAdminFrame.setVisible(true); // Show admin frame
    }
    
    /**
     * Shows dialog for adding a new student
     * @param parentFrame reference to parent frame
     */
    private static void showAddStudentDialog(JFrame parentFrame) {
        JDialog dialog = new JDialog(parentFrame, "Add New Student", true);
        dialog.setSize(400, 350);
        dialog.setLocationRelativeTo(parentFrame);
        dialog.setResizable(false); // Prevent resizing/fullscreen
        
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(8, 2, 10, 10));
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
        panel.setBackground(new Color(240, 248, 255));
        
        // ID Number
        JLabel idLabel = new JLabel("ID Number:");
        JTextField idField = new JTextField(10);
        
        // Name
        JLabel nameLabel = new JLabel("Name:");
        JTextField nameField = new JTextField(20);
        
        // Age
        JLabel ageLabel = new JLabel("Age:");
        JTextField ageField = new JTextField(5);
        
        // Section
        JLabel sectionLabel = new JLabel("Section:");
        JTextField sectionField = new JTextField(10);
        
        // Time
        JLabel timeLabel = new JLabel("Time:");
        JPanel timePanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        
        // Time input field
        JTextField timeField = new JTextField(5);
        
        // AM/PM selection
        JRadioButton amButton = new JRadioButton("AM");
        JRadioButton pmButton = new JRadioButton("PM");
        ButtonGroup timeGroup = new ButtonGroup();
        timeGroup.add(amButton);
        timeGroup.add(pmButton);
        amButton.setSelected(true); // Default to AM
        
        timePanel.add(timeField);
        timePanel.add(amButton);
        timePanel.add(pmButton);
        timePanel.setOpaque(false);
        
        // Status
        JLabel statusLabel = new JLabel("Status:");
        JPanel statusPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JRadioButton presentButton = new JRadioButton("Present");
        JRadioButton absentButton = new JRadioButton("Absent");
        JRadioButton lateButton = new JRadioButton("Late");
        ButtonGroup statusGroup = new ButtonGroup();
        statusGroup.add(presentButton);
        statusGroup.add(absentButton);
        statusGroup.add(lateButton);
        presentButton.setSelected(true); // Default to Present
        statusPanel.add(presentButton);
        statusPanel.add(absentButton);
        statusPanel.add(lateButton);
        statusPanel.setOpaque(false);
        
        // Add components to panel
        panel.add(idLabel);
        panel.add(idField);
        panel.add(nameLabel);
        panel.add(nameField);
        panel.add(ageLabel);
        panel.add(ageField);
        panel.add(sectionLabel);
        panel.add(sectionField);
        panel.add(timeLabel);
        panel.add(timePanel);
        panel.add(statusLabel);
        panel.add(statusPanel);
        
        // Buttons
        JButton saveButton = new JButton("Save");
        JButton cancelButton = new JButton("Cancel");
        
        panel.add(saveButton);
        panel.add(cancelButton);
        
        // Action listeners
        saveButton.addActionListener(e -> {
            // Validate input
            if (idField.getText().trim().isEmpty() || 
                nameField.getText().trim().isEmpty() ||
                ageField.getText().trim().isEmpty() ||
                sectionField.getText().trim().isEmpty() ||
                timeField.getText().trim().isEmpty()) {
                
                JOptionPane.showMessageDialog(dialog, 
                    "Please fill in all fields!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate ID (numbers only)
            if (!idField.getText().trim().matches("\\d+")) {
                JOptionPane.showMessageDialog(dialog, 
                    "ID must contain numbers only!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate name (letters only)
            if (!nameField.getText().trim().matches("[a-zA-Z\\s]+")) {
                JOptionPane.showMessageDialog(dialog, 
                    "Name must contain letters only (no numbers or special characters)!", 
                    "Input Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
            
             // Validate Age (numbers only)
            try {
                int age = Integer.parseInt(ageField.getText().trim());
                if (age <= 0 || age > 100) {
                    throw new NumberFormatException();
                }
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(dialog, 
                    "Please enter a valid age (1-100)!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate time format (numbers only)
            if (!timeField.getText().trim().matches("\\d+([:]\\d+)?")) {
                JOptionPane.showMessageDialog(dialog, 
                    "Time must be in numeric format (e.g., 9:30)!", 
                    "Input Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Get current date and time
            SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
            String currentTime = dateFormat.format(new Date());
            
            // Determine status
            String status = "Present";
            if (absentButton.isSelected()) {
                status = "Absent";
            } else if (lateButton.isSelected()) {
                status = "Late";
            }
            
            // Create student object
            Student student = new Student(
                idField.getText().trim(),
                nameField.getText().trim(),
                Integer.parseInt(ageField.getText().trim()),
                sectionField.getText().trim(),
                timeField.getText().trim() + " " + (amButton.isSelected() ? "AM" : "PM"),
                currentTime,
                status
            );
            
            // Add to list
            students.add(student);
            
            JOptionPane.showMessageDialog(dialog, 
                "Student added successfully!", "Success", 
                JOptionPane.INFORMATION_MESSAGE);
            
            dialog.dispose(); // Close dialog after saving
        });
        
        cancelButton.addActionListener(e -> {
            dialog.dispose(); // Close dialog without saving
        });
        
        dialog.add(panel);
        dialog.setVisible(true); // Show the dialog for adding a new student
    }
    
    /**
     * Shows dialog for editing an existing student
     * @param parentFrame reference to parent frame
     * @param student the student object to edit
     */
    private static void showEditStudentDialog(JFrame parentFrame, Student student) {
        JDialog dialog = new JDialog(parentFrame, "Edit Student", true);
        dialog.setSize(400, 350);
        dialog.setLocationRelativeTo(parentFrame);
        dialog.setResizable(false); // Prevent resizing/fullscreen
        
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(8, 2, 10, 10));
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
        panel.setBackground(new Color(240, 248, 255));
        
        // Parse existing time
        String timeValue = student.getTimeOfDay().split(" ")[0];
        String amPm = student.getTimeOfDay().split(" ")[1];
        
        // ID Number
        JLabel idLabel = new JLabel("ID Number:");
        JTextField idField = new JTextField(student.getId(), 10);
        
        // Name
        JLabel nameLabel = new JLabel("Name:");
        JTextField nameField = new JTextField(student.getName(), 20);
        
        // Age
        JLabel ageLabel = new JLabel("Age:");
        JTextField ageField = new JTextField(String.valueOf(student.getAge()), 5);
        
        // Section
        JLabel sectionLabel = new JLabel("Section:");
        JTextField sectionField = new JTextField(student.getSection(), 10);
        
        // Time
        JLabel timeLabel = new JLabel("Time:");
        JPanel timePanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        
        // Time input field
        JTextField timeField = new JTextField(timeValue, 5);
        
        // AM/PM selection
        JRadioButton amButton = new JRadioButton("AM");
        JRadioButton pmButton = new JRadioButton("PM");
        ButtonGroup timeGroup = new ButtonGroup();
        timeGroup.add(amButton);
        timeGroup.add(pmButton);
        
        if (amPm.equals("AM")) {
            amButton.setSelected(true);
        } else {
            pmButton.setSelected(true);
        }
        
        timePanel.add(timeField);
        timePanel.add(amButton);
        timePanel.add(pmButton);
        timePanel.setOpaque(false);
        
        // Status
        JLabel statusLabel = new JLabel("Status:");
        JPanel statusPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JRadioButton presentButton = new JRadioButton("Present");
        JRadioButton absentButton = new JRadioButton("Absent");
        JRadioButton lateButton = new JRadioButton("Late");
        ButtonGroup statusGroup = new ButtonGroup();
        statusGroup.add(presentButton);
        statusGroup.add(absentButton);
        statusGroup.add(lateButton);
        
        if (student.getStatus().equals("Present")) {
            presentButton.setSelected(true);
        } else if (student.getStatus().equals("Absent")) {
            absentButton.setSelected(true);
        } else {
            lateButton.setSelected(true);
        }
        
        statusPanel.add(presentButton);
        statusPanel.add(absentButton);
        statusPanel.add(lateButton);
        statusPanel.setOpaque(false);
        
        // Add components to panel
        panel.add(idLabel);
        panel.add(idField);
        panel.add(nameLabel);
        panel.add(nameField);
        panel.add(ageLabel);
        panel.add(ageField);
        panel.add(sectionLabel);
        panel.add(sectionField);
        panel.add(timeLabel);
        panel.add(timePanel);
        panel.add(statusLabel);
        panel.add(statusPanel);
        
        // Buttons
        JButton saveButton = new JButton("Save Changes");
        JButton cancelButton = new JButton("Cancel");
        
        panel.add(saveButton);
        panel.add(cancelButton);
        
        // Action listeners
        saveButton.addActionListener(e -> {
            // Validate input
            if (idField.getText().trim().isEmpty() || 
                nameField.getText().trim().isEmpty() ||
                ageField.getText().trim().isEmpty() ||
                sectionField.getText().trim().isEmpty() ||
                timeField.getText().trim().isEmpty()) {
                
                JOptionPane.showMessageDialog(dialog, 
                    "Please fill in all fields!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate ID (numbers only)
            if (!idField.getText().trim().matches("\\d+")) {
                JOptionPane.showMessageDialog(dialog, 
                    "ID must contain numbers only!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate name (letters only)
            if (!nameField.getText().trim().matches("[a-zA-Z \\s]+")) {
                JOptionPane.showMessageDialog(dialog, 
                    "Name must contain letters only (no numbers or special characters)!", 
                    "Input Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            try {
                int age = Integer.parseInt(ageField.getText().trim());
                if (age <= 0 || age > 100) {
                    throw new NumberFormatException();
                }
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(dialog, 
                    "Please enter a valid age (1-100)!", "Input Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Validate time format (numbers only)
            if (!timeField.getText().trim().matches("\\d+([:]\\d+)?")) {
                JOptionPane.showMessageDialog(dialog, 
                    "Time must be in numeric format (e.g., 9:30)!", 
                    "Input Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            // Determine status
            String status = "Present";
            if (absentButton.isSelected()) {
                status = "Absent";
            } else if (lateButton.isSelected()) {
                status = "Late";
            }
            
            // Update student object with new values
            student.setId(idField.getText().trim());
            student.setName(nameField.getText().trim());
            student.setAge(Integer.parseInt(ageField.getText().trim()));
            student.setSection(sectionField.getText().trim());
            student.setTimeOfDay(timeField.getText().trim() + " " + (amButton.isSelected() ? "AM" : "PM"));
            student.setStatus(status);
            
            JOptionPane.showMessageDialog(dialog, 
                "Student information updated successfully!", "Success", 
                JOptionPane.INFORMATION_MESSAGE);
            
            dialog.dispose(); // Close dialog after saving changes
        });
        
        cancelButton.addActionListener(e -> {
            dialog.dispose(); // Close dialog without saving changes
        });
        
        dialog.add(panel);
        dialog.setVisible(true); // Show the dialog for editing an existing student
    }
}

/**
 * Student class to store attendance information
 */
class Student {
    private String id; // Student ID
    private String name; // Student name
    private int age; // Student age
    private String section; // Student section
    private String timeOfDay; // Time of attendance
    private String dateTime; // Date and time of attendance
    private String status; // Attendance status (Present, Absent, Late)
    
    /**
     * Constructor for Student class
     */
    public Student(String id, String name, int age, String section, 
                  String timeOfDay, String dateTime, String status) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.section = section;
        this.timeOfDay = timeOfDay;
        this.dateTime = dateTime;
        this.status = status;
    }
    
    // Getters and setters for student attributes
    public String getId() { return id; }
    public void setId(String id) { this.id = id; }
    
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    
    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }
    
    public String getSection() { return section; }
    public void setSection(String section) { this.section = section; }
    
    public String getTimeOfDay() { return timeOfDay; }
    public void setTimeOfDay(String timeOfDay) { this.timeOfDay = timeOfDay; }
    
    public String getDateTime() { return dateTime; }
    public void setDateTime(String dateTime) { this.dateTime = dateTime; }
    
    public String getStatus() { return status; }
    public void setStatus(String status) { this.status = status; }
} 
