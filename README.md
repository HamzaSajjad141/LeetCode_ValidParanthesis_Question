# LeetCode Valid Parentheses Checker

Welcome to the "LeetCode Valid Parentheses Checker" repository! This repository contains a C++ program that demonstrates a simple and efficient method to check for balanced parentheses in an input string.

## Table of Contents

- [Introduction](#introduction)
- [Algorithm Overview](#algorithm-overview)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This repository provides a C++ program that uses a stack-based approach to determine whether a given string contains valid and balanced parentheses. The program showcases fundamental stack usage and provides a clear solution to the classic problem of checking parentheses balance.

## Algorithm Overview

The core of the algorithm involves using a stack to keep track of opening parentheses encountered in the input string. As closing parentheses are encountered, they are matched against the top of the stack. If the stack is empty or if the parentheses do not match, the input string is considered invalid. Otherwise, if all parentheses are correctly matched, the input string is deemed valid.

## Usage

To run the program on your local machine:

1. Clone this repository using `git clone https://github.com/yourusername/LeetCode_ValidParenthesis_Question.git`
2. Navigate to the cloned directory: `cd LeetCode_ValidParenthesis_Question`
3. Compile the source code using a C++ compiler, e.g., `g++ main.cpp -o validParenthesis`
4. Run the compiled executable: `./validParenthesis`
5. Follow the on-screen prompts to enter the input string containing parentheses.
6. The program will display whether the input string contains valid parentheses or not.

## Contributing

Contributions to this repository are encouraged and appreciated! If you have any improvements, bug fixes, or additional features to propose, please follow these steps:

1. Fork this repository.
2. Create a new branch: `git checkout -b new-feature`
3. Make your changes and commit them: `git commit -m 'Add some feature'`
4. Push to the branch: `git push origin new-feature`
5. Create a pull request, describing your changes and improvements.

Your contributions will help enhance the functionality and educational value of this repository.

## License

This project is licensed under the [MIT License](LICENSE).

---
Thank you for exploring this repository and delving into the world of balanced parentheses checking in C++!
