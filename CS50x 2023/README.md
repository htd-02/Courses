From [here](https://cs50.harvard.edu/x/2023/), taking the course on [edX](https://home.edx.org/).

# 1. 21/11/2023 - [Week 0 - Scratch](https://learning.edx.org/course/course-v1:HarvardX+CS50+X/block-v1:HarvardX+CS50+X+type@sequential+block@a8730f85a9a94d41a784a58c4b6d8bdc)

Requires to use [Scratch](https://scratch.mit.edu/), available as an online editor or as a downloadable application.

---

1. [Video](https://www.youtube.com/watch?v=IDDmrzzB14M)
	- Watched the 21/11/2023
2.  [Notes](https://cs50.harvard.edu/x/2023/notes/0/) & [Slides](https://cdn.cs50.net/2022/fall/lectures/0/lecture0.pdf)
	- Read the 22/11/2023
3. [Problem Set 0](https://cs50.harvard.edu/x/2023/psets/0/)
    - Started the 23/11/2023
    - [Current Progress](https://scratch.mit.edu/projects/929628306/)

---

- [Scratch files made when following the lecture](<Week 0/Lecture 0/>)
    - 21/11/2023 - [Snippets From Lecture](<Week 0/Lecture 0/Snippets From Lecture.sb3>) from  
        - [Scratch Chapter](https://cs50.harvard.edu/x/2023/notes/0/#scratch)
        - [Abstraction Chapter](https://cs50.harvard.edu/x/2023/notes/0/#abstraction)
        - [If Chapter](https://cs50.harvard.edu/x/2023/notes/0/#if)
    - 22/11/2023 - [Oscartime](<Week 0/Lecture 0/Oscartime.sb3>) from
        - [Expanding Your Imagination Chapter](https://cs50.harvard.edu/x/2023/notes/0/#expanding-your-imagination)
        - [Assets Used](https://cdn.cs50.net/2022/fall/lectures/0/src0.zip)
    - 22/11/2023 - [Ivy's Hardest Game - Harvard](<Week 0/Lecture 0/Ivy's Hardest Game - Harvard.sb3>) from
        - [Sprite Movement Chapter](https://cs50.harvard.edu/x/2023/notes/0/#sprite-movement)
        - [More Sprites Chapter](https://cs50.harvard.edu/x/2023/notes/0/#more-sprites)
        - [Assets Used](https://cdn.cs50.net/2022/fall/lectures/0/src0.zip)

## 1.1. Lecture 0

### 1.1.1. Computational Thinking

Computer programming is about taking some ***input*** and creating some ***output***, solving a problem.
What happens between the ***input*** and ***output***, what we could call a ***black box***, is the focus of this course.
### 1.1.2 Binary

- A bit is a 0 or a 1, a byte is 8 bits.
- In decimal 101 is
	$10^2\times1+10^1\times0+10^0\times1=101$ 
- In binary 101 is a 3 bits value, converted to decimal it is :
	$2^2\times1+2^1\times0+2^0\times1=5$
- Computers use 'base-2' to count, it can be pictured as follows for a byte :

|   1   |   1   |   1   |   1   |   1   |   1   |   1   |   1   |
|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|
| $2^7$ | $2^6$ | $2^5$ | $2^4$ | $2^3$ | $2^2$ | $2^1$ | $2^0$ |
|  128  |  64   |  32   |  16   |   8   |   4   |   2   |   1   |

#### 1.1.2.1. ASCII

- ASCII uses 8 bits and can represent 256 characters, with letters starting with A as 65, 01000001, then B as 66, 01000010. A dot, ".", is 33 or 00100001.

#### 1.1.2.2. Unicode

- Unicode uses 32 bits and can represent over 2 million characters.
- With so many characters it contains most characters from the different alphabets used in the world, it also contains emojis, adding new ones every year.
- Unicode can now even represent very sophisticated emojis by using multiple 32 bits chunks for additional particularities like skin color, gender and more.

### 1.1.3. RGB

- Red, Green and Blue, called RGB, is a combination of three numbers.
- Images are collections of RGB values.
- Videos are sequences of images.

### 1.1.4. Algorithms

- Problem solving is critical to computer science and computer programming.
- As an example, we can imagine the problem of trying to locate a single name in a phonebook.
- An approach could be to read from page to page until locating the name or reaching the last page.
- An other approach could be to search two pages at a time.
- But a better approach could be to go in the middle of the phonebook and ask "is the name I am looking for to the left or to the right?", then repeat this process, cutting the problem in half and half and half until finding the name or reaching the last page.
- Each of these approaches could be called ***algorithms***.

### 1.1.5. Pseudocode

- ***Pseudocode*** is a human readable version of code.
- As an example of ***pseudocode*** we can look at the better of the three previous approaches to resolve the phonebook problem :  
1. *Pick up* phone book  
2. *Open to* the middle of phone book  
3. *Look at* page  
4. **If** `person is on page`  
5. &nbsp;&nbsp;&nbsp;&nbsp;*Call* person  
6. **Else if** `person is earlier in book`  
7. &nbsp;&nbsp;&nbsp;&nbsp;*Open to* middle of left half of book  
8. ***Go back to line 3***  
9. **Else if** `person is later in book`  
10. &nbsp;&nbsp;&nbsp;&nbsp;*Open to* middle of right half of book  
11. ***Go back to line 3***  
12. **Else**  
13. &nbsp;&nbsp;&nbsp;&nbsp;*Quit*  
- Some of these lines begin with verbs in *Italic*, these are called *functions*.
- Other include statements in **Bold**, these are called **conditionals**.
- There are also `Highlighted` expressions that can be stated as true or false, these are called `boolean expressions`.
- And then there are statements in ***Italic and Bold*** asking to return to a previous line, these are called ***loops***.

- The ability to create ***pseudocode*** is central to one's success in computer programming.
- It is a very important skill for at least two reasons.
	1. When you ***pseudocode*** before you create formal code, it allows you to think through the logic of your problem in advance.
	2. When you ***pseudocode***, you can later provide this information to others that are seeking to understand your coding decisions and how your code works.
### 1.1.6. Scratch

- Scratch is a great way to get into computer programming because it allows to play with ***building blocks*** in a visual manner, not having to be concerned about the syntax.
- Scratch operates in a coordinate system going from (-240,-180) to (240,180), the center of the stage is at (0,0).

### 1.1.7. Abstraction

- Along with pseudocoding, ***abstraction*** is an essential skill and concept with computer programming.
- ***Abstraction*** is the act of simplifying a problem into smaller and smaller problems.
- For example, if hosting a huge dinner for friends, the problem of having to cook the entire meal could be quite overwhelming. Howerver, by breaking down the task of cooking the meal into smaller tasks(or problems), the big task of creating this huge meal might feel less challenging.

## 1.2. Set Problem 0

### 1.2.1. 23/11/2023 - First day on the problem

#### 1.2.1.1. Starting Sprites

Started by creating two sprites  

- [PH]Character  
	- A small disk.  
- [PH]LevelBorder  
	- An empty rectangle with a corridor to one side.  

And global *variables*

- *Interract*  
    - Can be 0 or 1.
    - Indicates if the player is pressing the key to interact with their environment or not.  
- *CurrentLevel*  
    - Is the number of the current level, starts at 0.

#### 1.2.1.2. [PH]Character

Created 2 **functions**

- **Controls**
	1. If right arrow is pressed
	2. &nbsp;&nbsp;&nbsp;&nbsp;Change x by 1
	3. &nbsp;&nbsp;&nbsp;&nbsp;If touching [PH]LevelBorder
    4. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change x by -1
	5. If left arrow is pressed
	6. &nbsp;&nbsp;&nbsp;&nbsp;Change x by -1
	7. &nbsp;&nbsp;&nbsp;&nbsp;If touching [PH]LevelBorder
    8. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change x by 1
	9. If up arrow is pressed
	10. &nbsp;&nbsp;&nbsp;&nbsp;Change y by 1
	11. &nbsp;&nbsp;&nbsp;&nbsp;If touching [PH]LevelBorder
    12. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change y by -1
	13. If down arrow is pressed
	14. &nbsp;&nbsp;&nbsp;&nbsp;Change yx by 1
	15. &nbsp;&nbsp;&nbsp;&nbsp;If touching [PH]LevelBorder
    16. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change y by -1
    17. If space is pressed
    18. &nbsp;&nbsp;&nbsp;&nbsp;Set Interact to 1  
    19. Else
    20. &nbsp;&nbsp;&nbsp;&nbsp;Set Interact to 0  
    21. If w is pressed  
    22. &nbsp;&nbsp;&nbsp;&nbsp;Go to x: 0 y: 0  
    23. If r is pressed
    24. &nbsp;&nbsp;&nbsp;&nbsp;Ask if sure to want to reset the game
    25. &nbsp;&nbsp;&nbsp;&nbsp;If answer is Yes or yes or y
    26. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Go to x: 0 y: 0  
    27. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set *CurrentLevel* to 0  
    28. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set *Interact* to 0  
- **LevelNavigation**  
    1. If x position < -239
    2. &nbsp;&nbsp;&nbsp;&nbsp;Set x to 239
    3. &nbsp;&nbsp;&nbsp;&nbsp;If *CurrentLevel* = 0
    4. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set *CurrentLevel* to 1
    5. If x position > 239
    6. &nbsp;&nbsp;&nbsp;&nbsp;Set x to -239
    7. &nbsp;&nbsp;&nbsp;&nbsp;If *CurrentLevel* = 1
    8. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set *CurrentLevel* to 0
    9. If y position < -179
    10. &nbsp;&nbsp;&nbsp;&nbsp;Set y to 179
    11. If y position > 179
    12. &nbsp;&nbsp;&nbsp;&nbsp;Set y to -179

And the script running when the game starts

1. Set drag mode to not draggable
2. Loop
3. &nbsp;&nbsp;&nbsp;&nbsp;Run **Controls**
4. &nbsp;&nbsp;&nbsp;&nbsp;Run **LevelNavigation**
5. &nbsp;&nbsp;&nbsp;&nbsp;Return to line 2

#### 1.2.1.3. [PH]LevelBorder

Created the script running when the game starts  

1. Set drag mode to not draggable
2. Loop
3. &nbsp;&nbsp;&nbsp;&nbsp;Switch costume to *CurrentLevel*
4. &nbsp;&nbsp;&nbsp;&nbsp;Return to line 2

#### 1.2.1.4. End of First day on Problem Set 0

I now have functioning controls, allowing me to
- Move between levels.
- Interact with the environment(not yet tested since no interactible content yet).
- Unstuck myself.
- Reset the game.
