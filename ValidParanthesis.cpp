#include <iostream>
#include <stack> // Include the stack library for using stacks
using namespace std; // Using the standard namespace

// Function to check if the given string contains valid parentheses
bool validParenthesis(string s)
{
    stack<char> st; // Create a stack to store opening brackets

    for (int i = 0; i < s.size(); i++) // Loop through each character in the input string
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') // If the character is an opening bracket
        {
            st.push(s[i]); // Push it onto the stack
        }
        else // If the character is a closing bracket
        {
            if (st.empty()) // If the stack is empty (no corresponding opening bracket)
            {
                return false; // The parentheses are not balanced
            }

            // Check if the current closing bracket matches the top opening bracket in the stack
            if (s[i] == ')' && st.top() == '(')
            {
                st.pop(); // Pop the matching opening bracket from the stack
            }
            else if (s[i] == '}' && st.top() == '{')
            {
                st.pop(); // Pop the matching opening bracket from the stack
            }
            else if (s[i] == ']' && st.top() == '[')
            {
                st.pop(); // Pop the matching opening bracket from the stack
            }
            else
            {
                return false; // The parentheses are not balanced
            }
        }
    }

    return st.empty(); // If the stack is empty, all parentheses are balanced
}

int main()
{
    string s;
    bool a;
    cout << "Enter the brackets from the following .().{}.[]  : ";
    cin >> s; // Get input from the user

    a = validParenthesis(s); // Call the function to check for balanced parentheses

     // Print "true" if a is true, otherwise print "false"
    if (a)
    {
        cout << "It returns : true" << endl;
    }
    else
    {
        cout << "It returns : false" << endl;
    }


    return 0;
}
