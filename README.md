## HANGMAN GAME
# Introduction
C is a procedural programming language. It was initially developed by Denis Ritchie in the year 1972. It was mainly developed as a system operating language to write an operating system. The main features of the C language include low-level memory access, a simple set of keywords, and a clean style, these features make C language suitable for system programming like an operating system or compiler development. Many later languages have borrowed syntax/features directly or indirectly from the C language. C++ is nearly a superset of C language.
C is called as a robust language, which has so many built-in functions and operations, which can be used to write any complex program. It is best for writing both system software and business packages. C programs and efficient and fast. It is best for structured programming, where the user can think of a problem in terms of function modules (or) blocks.



Hangman is a guessing game for two or more players. One player thinks of a word, phrase or sentence and the other(s) 
tries to guess it by suggesting letters within a certain number of guesses. Originally a Paper-and-pencil game, there are now electronic versions.








# Problem statement
To develop a simple game called “Hangman” using C-language. This is used to increase the word power of the players in an interactive way. Games like these increase the knowledge of young people.
# Objective
To develop a game called “Hangman” using C-Language. Hangman is a simple game in which you have to guess a word within a limited number of chances.There will be seven chances before you guess the word. If all your guesses are wrong you lose or else you win.




# Methodology
# 1) Flow-chart
![image](https://user-images.githubusercontent.com/123388366/219250505-8bc3726c-0b97-4ae7-b5e0-8636a7e9dcf3.png)



# 2)Algorithm
Step 1: START

Step 2: Provide themes for the user to select

Step 3: Random word will be selected by the compiler based on that particular theme

Step 4: ASSIGN the word to a string named “WORD”

Step 5: Initiate another array ‘b’ of the same length as “word”, but each character is ‘_’. 

Step 6: User will enter a letter which will be compared with the letters present in that word.

Step 7: For each iteration, test whether the character entered by the player matches the letter of the number of the current iteration.

Step 8: If the entered letter is correct then the dashes will be replaced by the letter in their particular positions and if the entered letter is wrong then k++, where ‘k’ is the number of chances.

Step 9: Repeat steps 5 to 8 until k<=7

Step 10: If strcmp (word, b) ==0, you win.  If (7-k)==0 you lose. 

Step 11: Do you want to play again? Enter yes to continue and no to discontinue. 
              If yes, recalling of the function. 
              else exit.
              
Step 12: STOP 


# Results
Figure 1: Starting part of the game with rules.

![image](https://user-images.githubusercontent.com/123388366/219251023-7fa91286-77f9-47d3-b301-7635d38341f6.png)

Figure 2: Display the themes available and ask the user to choose one of them

![image](https://user-images.githubusercontent.com/123388366/219251366-f0d61ddb-f643-40b4-8cab-1dd50674f05c.png)

Figure 3: After choosing a theme, game will start and you have to guess the word

![image](https://user-images.githubusercontent.com/123388366/219251627-f406a86a-878a-41e1-8e19-b59751d341e8.png)

Figure 4: After finishing one round you will have chance to play again. If you enter “yes” then the game will be restarted from beginning.  

![image](https://user-images.githubusercontent.com/123388366/219251719-bb80756b-fb54-495f-afbf-7dea55bfc8f7.png)

Figure 5: If you enter “no” the game will end.

![image](https://user-images.githubusercontent.com/123388366/219251761-c83283c8-a32a-47e1-8dc4-b838edec7fc0.png)

# References
[1] E. Balaguruswamy, Programming in ANSI C, 7th Edition, published in 1992.

[2] Jacqueline Jones and Keith Harrow: Problem solving with C, published on March 12th, 1996

[3] Computer Fundamentals and Programming in C - Reema Thareja: Oxford University Press, Second Edition, published on June 27th, 2016






