int math(int num1, int num2, char Operator);
{
    char Operator;
    int num1, num2;
    int output;
    
    switch(Operator)
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
            return 0;
    }

}
