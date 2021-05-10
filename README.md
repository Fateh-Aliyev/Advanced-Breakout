# Advanced-Breakout
An advanced version of the hit game Breakout.

# Set-Up
To start play, simply open the `./breakout` file on Windows.  If on Linux, open the folder and then simply type in `./breakout` in terminal.  If you wish to compile the file yourself, you can navigate to the foler in a terminal and then compile using:
```
g++ breakout.cpp -o breakout glad.o -lglfw -ldl -I/usr/local/include/freetype2 -lfreetype
```

# Game Play
Press space to start the game.  The ball will start moving towards the paddle and you can move the paddle using the arrow keys.  If the ball gets past the paddle it's game over but you can start again by simply pressing space again.  To pause the game, press space.  Be mindfull of the fact that pausing is very glitchy.  Every time the ball hits the paddle, a set of blocks appears at the top.  The brighter the block, the more hits it will take for it to dissappear.  The more points that you have, the more blocks appear at the top.
