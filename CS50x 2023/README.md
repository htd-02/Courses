From [here](https://cs50.harvard.edu/x/2023/), taking the course on [edX](https://home.edx.org/).

# 1. 21/11/2023 - [Week 0 - Scratch](https://cs50.harvard.edu/x/2023/weeks/0/)

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

## 1.2. Caverns of Flesh - Set Problem 0

Available on [scratch.mit.edu](https://scratch.mit.edu/projects/929628306/) or on this repo [here](<./Week 0/Problem Set 0/Caverns of Flesh - CS50.sb3>)

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

### 1.2.2. Rest of the Week

Created an unrelated [scratch animation](https://scratch.mit.edu/projects/929660054/) before starting my daily course work.

---

Daily Recap  

- Day 2
    - The game now has a fully designed main character and map with functionning controls.
    - Wrote the story and started making the assets for the items spread around the map.  
- Day 3
    - Finished and added most of the assets.
    - Added the music.
- Day 4
    - Added the progression and had to add and change a lot of code to make it work.
- Day 5
    - Added all the monologues and remade the map, added some eyes peeking around.
    - Finishing details and bug fixing.

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

The date is Özolonuti, the 13th of Oloshwomö Numyol 2740 and the story happens in the ***Caverns of Flesh***, under the tundra slightly North of ***Pökrojitye***, the secondary ***yeki*** towering at the extreme South of ***Kisa***.  
***Shökrodo*** died only a few ***boshwos*** ago and chaos is spreading through ***Kisa***, the main character, the ***kivü*** ***Thulagnu Meyenwowüklö***(they gave themselves this second name when dying) are part of a religious group called the ***Lost***, currently at war with both the ***Messengers of the Yeki*** and the ***Children of the Sky***.  

The ***Lost*** believe that some entities created them and left them on ***Kisa***, beliefs shared by a lot of other ***kivü*** religious groups, the thing that only the ***Lost*** believe in is that these entities, the ***Engineers***, never cared for the ***kivü*** and even completely forgot about their existence.  
The ***Lost*** hate the ***Engineers*** and anyone believing they care about ***Kisa*** and it's inhabitants.

***Thulagnu*** was working with another kivü named ***Dizeho*** to find a way to shed their bodies and turn into ***yenwo***, the vital energy flowing through the world, so they could flee ***Begï*** and reach the stars to find their own purpose, without the ***Engineers***.  
They were quite close to success when the ***Messengers of the Yeki*** sent the ***Caverns of Flesh*** upon them.  
It devoured the tower they were working in, killing ***Dizeho*** and destroying most of their possessions.  
The attack took ***Thulagnu*** by surprise and caused them to become a victim of their research, turning into an incomplete being of ***yenwo*** with most memories lost.

What is left in the ***Caverns of Flesh*** will rot away and never see the day again.  



##### 1.2.2.3.1. Introduction

"You wake up in the Caverns of Flesh and you cannot remember who you are or what you are.  
One thing is sure, what you are now is not what you used to be, you are a sentient mass of yenwo and you could swear you used to have a body.  

You are at the entrance of the caverns, that you can tell by a disgusting thing next to you, the mouth of the abomination.  

Who are you? What are you? Why are you here?  

Maybe exploring the area could give some much needed answers."  

##### 1.2.2.3.2. Progression

The game progresses by finding items through the map, each item found increase the player's corruption, making the dame slightly darker, making the main character slowly disappear and making strange characters appear on screen.

###### 1.2.2.3.2.1. Items

Interacting with any of the items will display informations about the item, then if it is the first time interacting with the item, and depending on the other already discovered items, Thulagnu may start telling his thoughts about them.

1. ***Rëgi of Thulagnu***
    - Content
        1. "A damaged rëgi, crystal rods used to store information. Surprisingly, you can read the language used in it and some of it's contents are still readable despite the damage."
        2. "Kivüs, very tall humanoid species with bluish skin and atrophied muscles."
        3. "Powers beyong the physical, mastery of yenwo, communication through thoughts."
        4. "Thulagnu, member of the Lost, working with Dizeho."
        5. "Trying to shed their bodies to become pure yenwo, close to success."
        8. "Wanting to leave Begï and discover the stars."
        9. "Hate the Engineers, awful beings, they abandoned the kivüs."
        10. "A new purpose beyond the betrayal of the creators, far from war, far from pain."
    - Comments
        1. "What is this, I recognize it, I knew all of this !"
        2. "Am I Thulagnu? Was I a kivü?"
    - Additional comments if ***Corpse of Thulagnu*** was found before
        1. "Yes, yes, that corpse I found..."
        2. "The feelings when finding it... it is my corpse !"
        3. "I am Thulagnu, and I was a kivü..."
2. ***Rëgi of Warning***
    - Contents
        1. "A rëgi, crystal rods used to store information. Surprisingly, you can read the language used in it."
        2. "Today is Özolonuti, the 13th of Oloshwomö Numyol 2740 and this is a warning, to you and all the Lost between Pökrojitye and the remains of Shökrodo."
        3. "Companions of the Lost, the Messengers of the Yeki do not want you to succeed, they have awakened the Caverns of Flesh to annihilate you."
        4. "It is no small threat, if devoured, you will rot inside, there is no way out and our powers are ineffective against these walls of flesh."
        5. "Please be careful on your critical mission, do not allow your work to be annihilated."
        6. "Have someone spread the message to all our brothers in the region, the war that was raging far from your towers is coming straight to you all."
    - Comments
        1. "So that's what happened, war..."
    - Comments if ***Rëgi of Thulagnu*** and ***Corpse of Thulagnu*** were found before
        1. "Looks like we were not careful enough"
        2. "We failed our mission,
        3. "We were crushed by these fanatics and now there will be no rebirth..." 
3. ***Corpse of Dizeho***
    - Contents
        1. "The dismembered remains of what may have been a bluish humanoid."
    - Comments if ***Rëgi of Thulagnu*** was not found before
        1. "Must have been painful..."
    - Comments if ***Rëgi of Thulagnu*** was found before
        1. "Oh no... that's Dizeho !"
        2. "I remember now, they were a close friend,"
        3. "Now they will never see their dreams accomplished..."
    - Comments if ***Rëgi of Warning*** was found before
        1. "Yes... the Caverns of Flesh are merciless..."
4. ***Corpse of Thulagnu***
    - Contents
        1. "The corpse of a tall and bluish humanoid. It doesn't look damaged but is clearly dead."
    - Comments
        1. "I feel strange, as if I knew this person..."
    - Additional comments if ***Rëgi of Thulagnu*** was found before
        1. "Wait, that isn't someone I knew !"
        2. "This... This is me."
        3. "This was me..."
5. ***Broken Research Material***
    - Contents
        1. "A large pile of broken things, it may have been research equipment."
    - Comments if ***Rëgi of Thulagnu*** was not found
        1. "Hm, no answers here..."
    - Comments if ***Rëgi of Thulagnu*** was found
        1. "I think I may know what this is."
        2. "It is some of what was used in some of the experiments to turn into yenwo,"
        3. "All useless now."
6. ***Pulsating Organ***
    - Contents
        1. "An abomination made of living flesh."
7. ***Mouth of Pain***
    - Contents
        1. "The disgusting entrance to the caverns, there is no way to go through."
    - Comments
        1. "I hate it, with all my soul, such an abomination..."
    - Comments if ***Rëgi of Warning*** was found before
        2. "No way out..." 

- Rëgi  
[Colors : #2D43EB - #922DEB]
![Rëgi](<Week 0/Problem Set 0/Pictures/Rëgi.png>)

- Corpse of Dizeho  
[Colors : #94C3EB - #922DEB - #731D09]
![Corpse of Dizeho](<Week 0/Problem Set 0/Pictures/Corpse2.png>)

- Corpse of Thulagnu  
[Colors : #94C3EB - #94A7EB - #9D94EB - 94EBDB - #94DEEB]
![Corpse of Thulagnu](<Week 0/Problem Set 0/Pictures/Corpse1.png>)

- Broken Research Material  
[Colors : #AFAFAF - #734209]
![Broken Research Material](<Week 0/Problem Set 0/Pictures/ResearchMaterial.png>)

- Pulsating Organ  
[Colors : #734209 - #733009 - #731D09]
![Pulsating Organ](<Week 0/Problem Set 0/Pictures/PulsatingOrgan.png>)

- Mouth of Pain  
[Colors : #734209 - #733009 - #731D09]
![Mouth of Pain](<Week 0/Problem Set 0/Pictures/MouthofPain.png>)

###### 1.2.2.3.2.2. Corruption

The corruption evolves over the course of the game, increasing a little bit after each item is discovered, making Thulagnu slowly vanish and making more and more mysterious characters appear on the screen.

It starts at 0 and finishes at 7, once the last item is found, the game fades to a last scene before ending.

##### 1.2.2.3.3. Ending

- After interacting with the last item, a last monologue happens, with the player unable to move while Thulagnu slowly disappear.
- The music fades out so most of the monologue happens in silence.
- Tracked with *DialogueTracker* item 5
    1. So this is how it ends...
    2. In the chaos of the attack, I became a victim of my own experiments,
    3. I became an incomplete being of yenwo, my form slowly dissipating.
    4. So this is how I die, and this time no rebirth from the yekis,
    5. Thulagnu Meyenwowüklö ends today and for ever...
- The screen then fades to black.
- The track [Parasites of the Mind](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2021%20-%20Crumbling%20Path/flac/5%20-%20Parasites%20of%20the%20Mind.flac) starts playing.
- Credits.

#### 1.2.2.4. Lists

I made two lists to track important data
1. *Gamestate*
    - Defines actions that can or cannot be taken 
    1. If the character can use directional controls
    2. If music can be played
2. *ProgressTracker*
    - Tracks discovery for each of the items spread around the map
    1. Rëgi of Thulagnu
    2. Rëgi of Warning
    3. Corpse of Dizeho
    4. Corpse of Thulagnu
    5. Broken Research Material
    6. Pulsating Organ
    7. Mouth of Pain
3. *DialogueTracker*
    - Tracks all the monologues to check when to output them
    1. Monologue corruption 1
        1. "I feel strange..."
    2. Monologue corruption 3
        - If neither ***Rëgi of Thulagnu*** and ***Rëgi of Warning*** found
            1. "I don't understand !"
            2. "I think I'm dying, I don't want to !"
        - Monologue if else
        1. "What is happening?"
        2. "I feel myself fading away..."
    3. Monologue corruption 5
        - If neither ***Rëgi of Thulagnu*** and ***Rëgi of Warning*** found
            1. "I can't ! I can't !"
            2. "Let me out !"
            3. "Please let me out !"
        - If ***Rëgi of Thulagnu*** found
            1. "No no no"
            2. "I'm a failed experiment !"
            3. "I'm dying, I need to get out of here !"
        - If ***Rëgi of Warning*** found
            1. "I'm done, I can't get out,"
            2. "I can't get the help I need..."
        - If both ***Rëgi of Thulagnu*** and ***Rëgi of Warning*** found
            1. "I hate them..."
            2. "I hate them for doing this to us,"
            3. "Condemned to never see the stars from up close,"
            4. "They condemned my people to the ways of the Engineers,"
            5. "I saw the warning yet did not do enough..."
            6. "Now my brothers will pay for my mistake..."
    4. Monologue corruption 6
        - If ***Rëgi of Thulagnu*** found
            1. "No legacy, my work lost with me forever..."
        - If ***Rëgi of Warning*** found
            1. "What did I even have to do with this war?"
            2. "Why am I dying?"
        - If both ***Rëgi of Thulagnu*** and ***Rëgi of Warning*** found
            1. "I don't have much time left,"
            2. "No source of yenwo to sustain myself."
            3. "These Caverns of Flesh took any hope of maintaining my incomplete form..."
            4. "Bad for kivüs, even worse for me."
    5. Monologue corruption 7
        - [Ending Monologue](<./README.md#12233-ending>)



#### 1.2.2.5. Music

Each song is uploaded in mp3 and split in two to make sure not to go over the file limit to upload the project on [scratch.mit.edu](https://scratch.mit.edu/).
The fuction picking the tracks chooses music fitting for each of the corruption levels.

- The tracks  

0. [II](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/3%20-%20II.flac)
1. [IV](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/5%20-%20IV.flac)
2. [VI](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/7%20-%20VI.flac)
3. [VIII](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/9%20-%20VIII.flac)
4. [VII](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/8%20-%20VII.flac)
5. [V](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2018%20-%20Madness/flac/6%20-%20V.flac)
6. [Parasites of the Mind](https://github.com/Tales-of-a-Cosmic-Song/Music/blob/main/2021%20-%20Crumbling%20Path/flac/5%20-%20Parasites%20of%20the%20Mind.flac)

### 1.2.3. Conclusion

The game is in a playable state, the main monologues are in, but not the ones supposed to give additional details about the items.  
There doesn't seem to be any major game breaking bug remaining.  

It's far from a finished game but the first week of CS50 is finishing and I need to be ready for the next one.  
I will probably resume working on it once this course is over.

# 2. 28/11/2023 - [Week 1 - C](https://cs50.harvard.edu/x/2023/weeks/1/)

Requires to use Visual Studio Code, available as an online editor or as a downloadable application.

---

1. [Video](https://youtu.be/ywg7cW0Txs4)
	- Watched the 28/11/2023
2.  [Notes](https://cs50.harvard.edu/x/2023/notes/1/) & [Slides](https://cdn.cs50.net/2022/fall/lectures/1/lecture1.pdf)
    - Read the 29/11/2023
3. [Section](https://youtu.be/MEO1kAawOXQ)
4. [Data Types](https://youtu.be/Fc9htmvVZ9U)
5. [Operators](https://youtu.be/f1xZf4iJDWE)
6. [Conditional Statements](https://youtu.be/1wsaV5nVC7g)
7. [Loops](https://youtu.be/WgX8e_O7eG8)
8. [Command Line](https://video.cs50.io/BnJ013X02b8)
9. [Practice Problems 1](https://cs50.harvard.edu/x/2023/problems/1/)
10. [Lab 1](https://cs50.harvard.edu/x/2023/labs/1/)
11. [Problem Set 1](https://cs50.harvard.edu/x/2023/psets/1/)

---

- [C code snippets made during the lecture](./Week%201/Lecture%201/Code%20Snippets/)
    - 29/11/2023
        - [hello](./Week%201/Lecture%201/hello.c)
        - [yourname](./Week%201/Lecture%201/yourname.c)
        - [compare](./Week%201/Lecture%201/compare.c)
        - [agree](./Week%201/Lecture%201/agree.c)
        - [animals](./Week%201/Lecture%201/animals.c)
        - [mario](./Week%201/Lecture%201/mario.c)
        - [calculator](./Week%201/Lecture%201/calculator.c)

## 2.1. Lecture 1
`
### 2.1.1. From Source Code to Machine Code

In this lesson we will be writing source code, human readable code, in C and using a compiler to turn it into machine code that computers can understand.

### 2.1.2. Three Axes of Evaluation

1. Correctess
    - Does the code run as intended?
2. Design
    - How well is the code designed?
3. Style
    - How aesthetically pleasing and consistent is the code?

### 2.1.3. A First Program

- By typing `code hello.c` into the terminal window we create our first file, to make it a program we will write this code in it :
```C
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
- Every single character above serves a purpose, typing it incorrectly will cause the program to not run.

- To compile the program, we just need to type `make hello`
in the terminal, `make` is a compiler that will look for our `hello.c` file and turn it into a program called `hello`.

- To execute the program we need to type `./hello`.

[hello](./Week%201/Lecture%201/hello.c)

### 2.1.4. Functions

- In scratch we utilized the `say` block to display text on the screen, but in C we have a function called `printf` that does the same.

- Our code already invokes this function with the line
```C
printf("hello, world\n");
```
- Notice that the printf function is called, the argument passed to printf is "hello, world\n" and the statement of code is closed with a `;`.

- A common omission in C programming is the omossion of a semicolon, if you modify your code like this :

```C
#include <stdio.h>

int main(void)
{
    printf("hello, world\n")
}
```

- Running `make hello` again in the terminal will fail with an error caused by the omission of the semicolon.

- Make sure to edit the code to place the semicolon back where it was.

- Also notice the `\n` in the code, by removing it from the code, compiling it with `make hello` and typing `./hello`, the program changed by not going to a new line at the end of the execution.

- Make sure to edit the code to place `\n` back where it was.

- The statement at the start of the code `#include <stdio.h>` is a special command telling the compiler that we want to use the capabilities of the *library* called `stdio.h`. This allows you, among many other things, to utilize the `printf` function. Can read more about the capabilities of this library by reading the [Manual Pages](https://manual.cs50.io/).

- CS50 also has it's own *library* called `cs50.h`, we will use it next in our program.

### 2.1.5. Variables

- In Scratch, we could ask the user "What's your name?" and say "hello" with that name appended to it.

- In C, we can do the same. Some new code :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your nae? ");
    printf("hello, %s\n", answer);
}
```

- `#include <cs50.h>` has been added to the top of the code. The `get_string` function is used to get a string from the user. Then, the variable `answer` is passed to the `printf` function. `%s` tells the `printf` function to prepare itself to receive a string.

- `answer` is a special holding place we call a *variable*. `answer` is of type `string` and can hold any string within it. There are many *data types*, such as `int`, `bool`, `char` and many others.

- After compiling and running the program again, it now asks for a name and says hello with the name attached.

[yourname](./Week%201/Lecture%201/yourname.c)

### 2.1.6. Conditionals

- Another building block used within Scratch waw that of *conditionals*. For example, might want to do of thing if x is greater than y, then might want to do something else if the condition isn't met.

- We can create a new program to learn about these, type `code compare.c` and write :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
}
```

- Notice that two variables are created, an `int`, or integer, called `x` and another called `y`. The values of tese are populated using the `get_int` function.

- We can improve the program by coding as follow :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x s greater than y\n");
    }
    else
    [
        printf("x is equal to y\n");
    ]
}
```

- All potential outcomes are accounted for

[compare](./Week%201/Lecture%201/compare.c)

- Considering another data typ called a `char`, we can start a new program by typing `code agree.c` into the terminal. Write as follows :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Check wether agreed or not
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}
```

- Notice that single quotes are used for single characters and that `==` ensures that something *is equal* to something else, where a single equal sign has a very different meaning in C. Last, notice tha `||` effectively means *or*.

[agree](./Week%201/Lecture%201/agree.c)

### 2.1.7. Loops

- Can also the loop building block from Scratch in C.

- Type `code meow.c` and write :

```C
#include <stdio.h>

int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
}
```

- It does as intended but could have quite better design.

- We can improve that code by modifying as follows :

```C
#include <stdio.h>

int main(void)
{
    int i = 0;
    while  (i < 3)
    {
        printf("meow\n");
        i++;
    }
}
```

- We created an `int` called `i` and assigned it the value `0`. Then created a `while` loop that will run for as long as `i < 3`. The loop runs, every time `1` is added to `i` with the `i++` statement.

- Similarly, can implement a count-down by modifying the code :

```C
#include <stdio.h>

int mai(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }
}
```

- The counter `i` is now started at `3`. Each time the loop runs, it will reduce the counter by `1`. Once the counter is less than thero, the loop stops.

- Can still improve the design by using a `for` loop. Modify the code :

```C
#include <stdio.h>

int main(void)
{
    for (int i = 0; i <3; i++)
    {
        printf("meow\n");
    }
}
```

- The `for` loop includes three arguments. The first is `int i = 0` and starts our counter at 0. The second is `i < 3` and is the condition being checked. The last is `i++`, telling the loop to increment by `1` each time it runs.

- Can even loop forever using this code :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while (true)
    {
        printf("meow\n");
    }
}
```

- Note that `true` wil always be true, therefore the code will always run. Can lose control of the terminal this way, to break from an infinite loop can type `Ctrl+C` on the keyboard.

[animals](./Week%201/Lecture%201/animals.c)

### 2.1.8. Linux & the Command Line

- Linux is an operating system that is accessible via the command line in the codespace used for this course on VC Code.

- Some common command line tools include :
    - `ls`
        - lists files in a directory
    - `cd`
        - changes current directory
    - `cp`
        - copies files and directories
    - `mkdir`
        - creates a directory
    - `mv`
        - moves/renames files and directories
    - `rm`
        - removes(deletes) files
    - `rmdir`
        - removes(deletes) directories

- The most commonly used is `ls` which lists all the files in the current directory.

- With `mv` you can move a file from one directory to another.

- Can also create directories with `mkdir`.

- And move to any directory using `cd`.

### 2.1.9. Mario

- How does one approach a computer science related problem?

- To recreate on a new file a graphics from Mario, four question mark blocks side by site horizontally , we could do :

```C
#include <stdio.h>

int main(void)
{
    for (int = 0; i <4; i++)
    {
        printf("?");
    }
    printf("\n");
}
```

- The question marks are printed using a loop.

- Can apply the same logic to be able to create three vertical blocks :

```C
#include <stdio.h>

int main(void)
{
    for (int i = 0, i < 3; i++)
    {
        printf("#\n");
    }
}
```

- Now there are verical blocks printed with a loop.

- How to combine these ideas to create a three by three group of blocks?

```C
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

- Now there is a loop inside of another. The first loop defines which vertical row is being printed, for each row three columns are printed, after each row a new line is printed.

- To ensure that the number of rows is *constant*, unchangeable, can modify the code :

```C
#include <stdio.h>

int main(void)
{
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

- `n` is a *constant*, it can never be changed.

- Can make the code prompt the user for the size of the grid :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_inst("Size: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

- `get_int` is used to promp the user.

- A good programming piece of advice is to never trust the user. They will likely misbehave, typing incorrect values where they should not. Can protect the program from bad behavior by checking to make sure the user's input satisfies the needs of the program, can modify the code as follow :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    for (int i = 0; i < n); i++)
    {
        for (int j = 0, j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

- Notice how the user is continuously prompted for the size until their input is 1 or greater.

### 2.1.10. Comments

- Comments are a fundamental part of a computer program, they leave explanatory remarks to the programmer and others that may be collaborating with the programmer regarding the code.

- All code created for this coirse must include robust comments.

- Typically, each comment is a few words or more, providing the reader an opportunity to understand what is happening in a specific block of code. Further, such comments serve as a reminder to the programmer when they, later, need to revise their code.

- Comments involve placing `//` into the code, following by a comment. Can modify previous code by integrating commments :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

### 2.1.11. Abstraction

- Abstraction is the art of simplifying code such that it deals with smaller and smaller problems.

- Looking at this code, can see two essential problems, *get size of grid* and *print grid of bricks*.

- Can abstract away these problems into separate functions :

```C
#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (i < 1);
    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

- There are now three functions. First the `main` function that calls two other functions called `get_size` and `print_grid`. Second, a function called `get_size` which includes the exact code that was coded earlier to prompt the user for a size and make sure the value is one the program can work with. Third, a function called `print_grid` that prints the grid. Because the essential problems within the program were abstracted away, the `main` function is now very short.

[mario](./Week%201/Lecture%201/mario.c)

### 2.1.12. Operators & Types

- *Operators* refer to the mathematical operations that are supported by the compiler? In C, these mathematical operators include :
    - `+`
        - for addition
    - `-`
        - for substraction
    - `*`
        - for multiplication
    - `/`
        - for division
    - `%`
        - for remainder

- Types refer to the possible data that can be stored within a variable. For example, a `char` is designed to accomodate a single character like `a` or `2`.

- Types are very important because each type has specific limits. For example, because of the limits in memory, the highest value for an `int` can be `4294967296`.

- Types which will be interacted with during this course include :
    - `bool`
        - a Boolean expression of either true or false
    - `char`
        - a single character
    - `float`
        - a floating point value, or real number with a decimal value
    - `double`
        - a floating-point value with more digits than a float
    - `int`
        - an integer up to a certain size or number of bits
    - `long`
        - an integer with more bits so they can count higher than an int
    - `string`
        - a string of characters

- Can implement a calculator in C with this code :

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x + y);
}
```

- The `get_int` function is used to optain an integer from the user twice. One is stored in the `int` variable called `x` and the other in an `int` variable called `y`. Then the `printf` function prints the value of `x + y`, designated by the `%i` symbol.

- Need to make sure to pay attention to the types of variables used to avoid problems within the code.

[calculator](./Week%201/Lecture%201/calculator.c)