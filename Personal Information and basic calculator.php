<?php

$name = "";
$age = 0;
$section = "";
$address = "";

$operator = '';
$num1 = 0;
$num2 = 0;

echo "Enter your name: ";
$name = trim(fgets(STDIN));

echo "Enter your age: ";
$age = (int)trim(fgets(STDIN));

echo "Enter your section: ";
$section = trim(fgets(STDIN));

echo "Enter your address: ";
$address = trim(fgets(STDIN));

echo "Enter the first number: ";
$num1 = (int)fgets(STDIN);

echo "Enter the second number: ";
$num2 = (int)fgets(STDIN);

echo "Enter the operator (+, -, *, /): ";
$operator = trim(fgets(STDIN));

echo "========= Personal Information =========\n";
echo "Name: " . $name . "\n";
echo "Age: " . $age . "\n";
echo "Section: " . $section . "\n";
echo "Address: " . $address . "\n";
echo "========================================\n";


switch ($operator) {
    case '+':
        echo "Result: $num1 + $num2 = " . ($num1 + $num2) . "\n";
        break;
    case '-':
        echo "Result: $num1 - $num2 = " . ($num1 - $num2) . "\n";
        break;
    case '*':
        echo "Result: $num1 * $num2 = " . ($num1 * $num2) . "\n";
        break;
    case '/':
        if ($num2 != 0) {
            echo "Result: $num1 / $num2 = " . ($num1 / $num2) . "\n";
        } else {
            echo "Error: Division by zero is not allowed.\n";
        }
        break;
    default:
        echo "Invalid operator.\n";
        break;
}

echo "== End of Program ==\n";

?>
