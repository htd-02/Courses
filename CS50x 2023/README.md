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

---

- [Side Scratch projects made during this week](<Week 0/Side Projects/>)
    - 24/11/2023 - [The Collapse of the Stars](https://scratch.mit.edu/projects/929660054/)
        - A simple animation with text and music from [Tales of a Cosmic Song](https://github.com/Tales-of-a-Cosmic-Song/)

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

### 1.2.1. 23/11/2023 - First Day on the Problem

#### 1.2.1.1. Starting Sprites

Started by creating two sprites  

- ***[PH]Character***  
	- A small disk.  
- ***[PH]LevelBorder***  
	- An empty rectangle with a corridor to one side.  

And global *variables*

- *Interract*  
    - Can be 0 or 1.
    - Indicates if the player is pressing the key to interact with their environment or not.  
- *CurrentLevel*  
    - Is the number of the current level, starts at 0.

#### 1.2.1.2. ***[PH]Character***

Created 2 **functions**

- **Controls**
	1. If right arrow is pressed
	2. &nbsp;&nbsp;&nbsp;&nbsp;Change x by 1
	3. &nbsp;&nbsp;&nbsp;&nbsp;If touching ***[PH]LevelBorder***
    4. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change x by -1
	5. If left arrow is pressed
	6. &nbsp;&nbsp;&nbsp;&nbsp;Change x by -1
	7. &nbsp;&nbsp;&nbsp;&nbsp;If touching ***[PH]LevelBorder***
    8. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change x by 1
	9. If up arrow is pressed
	10. &nbsp;&nbsp;&nbsp;&nbsp;Change y by 1
	11. &nbsp;&nbsp;&nbsp;&nbsp;If touching ***[PH]LevelBorder***
    12. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Change y by -1
	13. If down arrow is pressed
	14. &nbsp;&nbsp;&nbsp;&nbsp;Change yx by 1
	15. &nbsp;&nbsp;&nbsp;&nbsp;If touching ***[PH]LevelBorder***
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

#### 1.2.1.3. ***[PH]LevelBorder***

Created the script running when the game starts  

1. Set drag mode to not draggable
2. Loop
3. &nbsp;&nbsp;&nbsp;&nbsp;Switch costume to *CurrentLevel*
4. &nbsp;&nbsp;&nbsp;&nbsp;Return to line 2

#### 1.2.1.4. End of First Day on Problem Set 0

I now have functioning controls, allowing me to
- Move between levels.
- Interact with the environment(not yet tested since no interactible content yet).
- Unstuck myself.
- Reset the game.

### 1.2.2. 24 & 25/11/2023- Second and Third Day on the Problem

Created an unrelated [scratch animation](https://scratch.mit.edu/projects/929660054/) before starting my daily course work.

---

Daily Recap  

- Day 2
    - The game now has a fully designed main character and map with functionning controls.
    - Wrote the story and started making the assets for the items spread around the map.  

#### 1.2.2.1. Editing Previous Code

Renamed ***[PH]Character*** and ***[PH]LevelBorder*** to ***Character*** and ***LevelBorder***.  

improved the game reset and the interaction commands by editing the **Controls** function, they will now use broadcasts to communicate with other sprites

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
    18. &nbsp;&nbsp;&nbsp;&nbsp;Broadcast Interact
    19. &nbsp;&nbsp;&nbsp;&nbsp;Wait until space is not pressed
    20. If w is pressed  
    21. &nbsp;&nbsp;&nbsp;&nbsp;Go to x: 0 y: 0  
    22. If r is pressed
    23. &nbsp;&nbsp;&nbsp;&nbsp;Broadcast QuestionReset1
    24. &nbsp;&nbsp;&nbsp;&nbsp;Ask
    25. &nbsp;&nbsp;&nbsp;&nbsp;If answer is Yes or yes or y
    26. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Go to x: 0 y: 0  
    27. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set *CurrentLevel* to 0  
    28. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set *Interact* to 0  
    29. &nbsp;&nbsp;&nbsp;&nbsp;Broadcast QuestionReset0

Created a new sprite that will contain any text displayed on the screen, called ***TextBoxes*** and contains two costumes and a few small scripts for now

- To display the text asking if the player wants to reset the game
    1. When I receive QuestionReset1
    2. &nbsp;&nbsp;&nbsp;&nbsp;Switch costume to ResetGame
- To clear the screen from text
    1. When I receive QuestionReset0
    2. &nbsp;&nbsp;&nbsp;&nbsp;Switch costume to Empty

And the script running when the game starts  
1. Switch costume to Empty
2. Go to front layer
3. Set drag mode not draggable
4. go to x: 0 y: 0

#### 1.2.2.2. The World and the Main Character

##### 1.2.2.2.1. The World

Created a complete map of the world and cut it into 10 smaller sections of $480\times360$, since this is the size of the scratch stage, here is the repartition of all the sections

| Map | 480 | 960 | 1440 | 1920 | 2400 |
|:----:|:----:|:----:|:----:|:----:|:----:|
| **360** | 7 | 8 | 9 |  |  |
| **720** |  | 3 | 4 | 5 | 6 |
| **1080** |  | 1 | 2 |  |  |
| **1440** |  |  | 0 |  |  |

Complete world map is $2400\times1440$.  

Started working with this color palette but ended up applying a saturation effect of scale 0.535 on every layer.
- Background
    1. #733009
- Border
    1. #734209
    2. #735009
- Details
    1. #731D09
    2. #730B09

Completed map :
![Map](<Week 0/Problem Set 0/Pictures/Map.png>)

##### 1.2.2.2.2. The Main Character

Made a $500\times500$ image to create the main character in.  

Using the same colors as the map.  

1. #733009
2. #734209
3. #735009
4. #731D09
5. #730B09

Completed character :
![Character](<Week 0/Problem Set 0/Pictures/Character.png>)

##### 1.2.2.2.4. Making it All Work Together

The map has 3 layers

1. The background, in ***backdrop***
2. The borders, in ***MapBorder*** sprite
3. The shadows, in ***Shadows*** sprite

The main character has 2 layers

1. ***Character*** sprite
    - Rotates continuously
2. ***Eye*** sprite
    - Looks at the direction the player is going towards

I made heavy use of broadcasts, every movement ***Character*** is doing is broadcasted so that ***Eye*** can stay synchronized with it.  

#### 1.2.2.3. The Story

***HEAVY SPOILERS AHEAD***

The date is özolonuti, the 13th of oloshwomö numyol 2740 and the story happens in the ***Caverns of Flesh***, under the tundra slightly North of ***Pökrojitye***, the secondary ***yeki*** towering at the extreme South of ***Kisa***.  
***Shökrodo*** died only a few ***boshwos*** ago and chaos is spreading through ***Kisa***, the main character, the ***kivü*** ***Thulagnu*** is part of a religious group called the ***Lost***, currently at war with both the ***Messengers of the Yeki*** and the ***Children of the Sky***.  

The ***Lost*** believe that some entities created them and left them on ***Kisa***, beliefs shared by a lot of other ***kivü*** religious groups, the thing that only the ***Lost*** believe in is that these entities, the ***Engineers***, never cared for the ***kivü*** and even completely forgot about their existence.  
The ***Lost*** hate the ***Engineers*** and anyone believing they care about ***Kisa*** and it's inhabitants.

***Thulagnu*** was working with another kivü named ***Dizeho*** to find a way to shed their bodies and turn into ***yenwo***, the vital energy flowing through the world, so they could flee ***Begï*** and reach the stars to find their own purpose, without the ***Engineers***.  
They were quite close to success when the ***Messengers of the Yeki*** sent the ***Caverns of Flesh*** upon them.  
It devoured the tower they were working in, killing ***Dizeho*** and destroying most of their possessions.  
The attack took ***Thulagnu*** by surprise and caused him to become a victim of his research, turning into an incomplete being of ***yenwo*** with most memories lost.

What is left in the ***Caverns of Flesh*** will rot away and never see the day again.  



##### 1.2.2.3.1. Introduction

"You wake up in the Caverns of Flesh and you cannot remember who you are or what you are.  
One thing is sure, what you are now is not what you used to be, you are a sentient mass of yenwo and you could swear you used to have a body.  

You are at the entrance of the caverns, that you can tell by a disgusting thing next to you, the mouth of the abomination.  

Who are you? What are you? Why are you here?  

Maybe exploring the area could give some much needed answers."  

##### 1.2.2.3.2. Progression

The game progresses by finding items through the map, each item found increase the player's corruption, slowly altering the game visuals.

###### 1.2.2.3.2.1. Items

1. Rëgi of Thulagnu
    - A blue crystal rod containing informations about Thulagnu
    - "Oh, what a strange item, it seems in pretty bad shape but it does contain characters I can read..."
    - "I was... a kivü? What are those? Oh I see, tall and standing on two legs, two very long arms with hands that could seize anything, a long bluish body with almost no muscles."
    - "But also powers beyong the physical, mastery of yenwo, communication through thoughts..."
    - "Wait, I am made of yenwo, I now only exist as a mass of this vital energy... Nothing is left of my body."
    - "Looks like I was working with an other kivü, something about a groundbreaking achievement."
2. Rëgi of Warning
    - A blue crystal rod containing informations about the current war and the dangers of the Caverns of Flesh
3. Corpse of Dizeho
4. Corpse of Thulagnu
5. Broken Research Material
6. Pulsating Organ
7. Mouth of Pain
    - Entrance to the caverns, emits a disturbing screaming noise.

- Corpse of Thulagnu  
[Colors : #94C3EB - #94A7EB - #9D94EB - 94EBDB - #94DEEB]
![Corpse of Thulagnu](<Week 0/Problem Set 0/Pictures/Corpse1.png>)

- Corpse of Dizeho  
[Colors : #94C3EB - #922DEB - #731D09]
![Corpse of Dizeho](<Week 0/Problem Set 0/Pictures/Corpse2.png>)

- Rëgi  
[Colors : #2D43EB - #922DEB]
![Rëgi](<Week 0/Problem Set 0/Pictures/Rëgi.png>)

- Mouth of Pain  
[Colors : #734209 - #733009 - #731D09]
![Mouth of Pain](<Week 0/Problem Set 0/Pictures/MouthofPain.png>)

- Pulsating Organ  
[Colors : #734209 - #733009 - #731D09]
![Pulsating Organ](<Week 0/Problem Set 0/Pictures/PulsatingOrgan.png>)

- Broken Research Material  
[Colors : #AFAFAF - #734209]
![Broken Research Material](<Week 0/Problem Set 0/Pictures/ResearchMaterial.png>)

###### 1.2.2.3.2.2. Corruption

The corruption evolves over the course of the game, increasing a little bit after each item is discovered, making Thulagnu slowly vanish and making noise appear on the screen.

It starts at 0 and finishes at 7, once the last item is found, the game fades to a last scene before ending.

###### 1.2.2.3.3. Ending

#### 1.2.2.4. The Programming

##### 1.2.2.4.1. Lists

I made two lists to track important data
1. *Gamestate*
    - Contains booleans to help tell scripts what to do  
    1. If the character can use directional controls
    2. If music can be played
2. *ProgressTracker*
    - Tracks if each of the 7 items was discovered
    1. Rëgi of Thulagnu
    2. Rëgi of Warning
    3. Corpse of Dizeho
    4. Corpse of Thulagnu
    5. Broken Research Material
    6. Pulsating Organ
    7. Mouth of Pain

##### 1.2.2.4.2. Music

Each song is uploaded in mp3 and split in two to make sure not to go over the file limit to upload the project on [scratch.mit.edu](https://scratch.mit.edu/).
The fuction picking the tracks chooses music fitting for each of the corruption levels.

- The tracks  

0. [II](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/3%20-%20II.flac)
1. [IV](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/5%20-%20IV.flac)
2. [VI](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/7%20-%20VI.flac)
3. [VIII](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/9%20-%20VIII.flac)
4. [VII](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/8%20-%20VII.flac)
5. [V](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/6%20-%20V.flac)

---

Todo
- Story
    - Told through the discovery of items through the map
- Corruption mechanic
    - The more items found, the more alterations of the game window, until finding all the items and triggering the end of game event.
- Add sound effects

