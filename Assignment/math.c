int math(int num1, int num2, char Operator);
{
    char Operator;  // Select operation to perform (ie. add, subtract, OR, etc.)
    int num1, num2; // Operands
    int output;     // Result of operation performed on num1 and num2
    
    switch(Operator)    //Switch statement with various Operators as conditions
    {
        case '+':
            output = num1 + num2;
            break;
        
        case '-':
            output = num1 - num2;
            break;
            
        case '*':
            output = num1 * num2;
            break;
         
        case '/':
            output = num1 / num2;
            break;
            
        case '%':
            output = num1 % num2;
            break;
            
        case '<':
            output = num1 << num2;
            break;
            
        case '>':
            output = num1 >> num2;
            break;
        
        case '&':
            output = num1 & num2;
            break;
        
        case '|':
            output = num1 | num2;
            break;
        
        case '^':
            output = num1 ^ num2;
            break;
        
        case '~':
            output = ~num1;
            break;
            
        default:
            return 0;   // return 0 if no operator or if operator is invalid
    }

}
