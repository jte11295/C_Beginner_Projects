Create Tic Tac Toe!

Process:
- Classic coding project that recreates a childhood staple
- Displays board using Terminal Ouput
- Players take turns placing X's and O's by getting input from Terminal
- Check if move is valid
- After each move, check the board to see if a win has occurred or if Cats game
- Allow players to play again, swapping turns so that the loser goes first (or whoever didn't go last in Cats game)


BUGS
- Still haven't fixed issue with user input
- Issue is caused by, I believe, since using char inputs, the input is being read too quick 
  and is registering the '/r from the Enter/Return Key previously presed as an input for the next prompt
- Solution: A debounce of the "Enter" Key is needed