**PROJECT TITLE: TYPING EFFECT [C++]**
**DESCRIPTION:** This is a project that shows the functionality of a typing effect. When run, the program will display a string of words (sentences) with the effect that each 
word of the sentences are being typed by the program. The drive behind making this project was solely out of curiosity and fascination at this trick being used in movies 
where a similar effect is shown on a terminal. A most recent example to my memory, of something similar to this effect being used is in the movie Harry Potter: Chamber of Secrets. 
The scene where this is used is where Tom Riddle speaks to Harry Potter through a book and his words were displayed in a typing fashion where each letter of his sentences were 
printed out one after the other. With enough curiosity stirred in me, I decided to see if it were possible to make the effect with C++. 

- Libraries used in this project include the iostream library, which handles the standard input/output functions. The chrono library, which handles some little time management
  functions, the thread library, for handling the creation and management of threads in the program, and the conio.h header file which handles the performance of simple text-based
  output functions on the console. Features like "getch()" and "gotoxy()" are possible because of the use of this header file.
  
- At the start of this program, a function to set the cursor's position is defined. It takes in two parameters, both int data types, as x-y coordinates for where the cursor
  should be at the start of the program's execution. Inside this function, a printf statement with ANSI escape code is used to complete the feature of placing the cursor at specific coordinates.
  "\x1b" represents the ASCII escape character, hexadecimal '1b', and it signals the start of an escape sequence.
  "[", an opening square bracket represents the beginning of the control sequence.
  "%d" represents a placeholder for the first variable, which in this case is y, and represents the row or line number.
  ";", a semicolon to separate the row and column components
  "%d" represents yet another placeholder for the second variable, in this case x, and represents the column number.
  "f", a character that is a part of the escape sequence and signifies this to be a cursor positioning command.
  When put together, this line of code moves the cursor to the position specified by the variables "y" and "x" on the console. The variables are defined later in the main function
  as they determine where in the row and column of the console to which the cursor will be moved.
 
- The next part is a function to initiate the typing effect, as named accordingly. This function takes in two parameters, one string and one int, the string parameter represents
  the text to be displayed and the int parameter represents the time delay in milliseconds, specifying how long each string is to be displayed on the screen before the program
  moves on to the next string. Further into this function, a for loop is used to repeat the string display process throughout the length of the sentence being displayed.
  A thread is also initiated for the delay itself, and this is where it is specified that the delay time value entered is measured in milliseconds. 

- Then comes the main function, where it all pieces together. First the console width is defined (an int data variable type) with a fixed value of 50 (can be changed as desired),
  then a middle value is defined (also an int data variable type) as simply the half value of the already defined console width. This is necessary for the program to properly ascertain
  where everything else goes. Then the sentence to be displayed is determined and defined by a string statement, and after that a delay time value is determined based on my specifications.

  Following that comes the definition of the x and y coordinate values to be used in the function for setting the cursor position. The x value (startX) is defined as a value derived
  from subtracting the previously defined middle value from the value derived from dividing the length of the sentence by 2. The y (startY) value is simply 1. After this comes the display
  itself, a function call to both the cursor placing function (gotoxy) and the typeText function. gotoxy is given two parameters, the x and y coordinates already defined, and the typeText
  function is given two parameters, the sentence to be displayed and the delay time in milliseconds for each character. This delay, when defined, essentially tells the program how long each
  iteration should last before moving on to start the next iteration.

  The final parts of this program are essentially repetitions of the last few lines. x and y coordinates for the new text to be displayed are defined, with the x value being the value of
  the already defined middle variable subtracted by 20, and the y value being the value of startY + 2. The gotoxy function is called and fed these data values as parameters. The string sentence
  is defined and the same delay parameter as the first sentence is used. Then the typeText function is called and the sentence and delay parameters are fed into it. After this, a _getch() function
  was used, courtesy of the conio header file. This makes it so that the console is held active until the user presses a key to terminate the program as the prompt requested.

This program was written entirely with C++ and the IDE used was Visual Studio (not Visual Studio Code). My learning objectives fulfilled with this project include acquiring further 
knowledge into the functionalities of certain libraries and header files such as the ones used in this project (1), knowing what ANSI escape code is and how it can be used in projects (2), 
as well as more insight on how time management with respect to the console display works (3). The curiosity behind embarking this project was also satisfied at its completion.  

**CREDITS:** YouTube, Google. 
**CONTACT:** Email: precioussunday@my.smcccd.edu
**KNOWN ISSUES:** None were discovered at the completion of this project, however some potential issues from compatibility problems can occur. It is important that you are operating 
with the most updated version of Visual Studio. A possible error that can occur, even with this program being run on windows, will occur in line 50 with the use of _getch(). The underscore in 
front of it was deliberately added because it could not work for me without it, however the function itself does not need it to work. So if as is, an error is shown in line 50 when you try running it, 
a potential fix could be to simply remove the underscore. Besides this, the program should work fine if you are using the latest version of Visual Studio. Please refer to my email should you have any 
questions, encounter any other issues or would like to offer suggestions. 
**TIMESTAMP:** 26/02/2024 || 6:18 PM (PST)
