
# Summer Projects Recruitment tasks

A brief description of what this project does and who it's for

## Web3 recruitment task

#### Created a 3D Cars class

- used x,y,z for coordinates of car 
- used speedX, speedY and speedZ for speeds along respective axis
- accelerate function also takes acceleration differently for all directions
- similarly goes for brake function
- move function moves the car by the distance it would cover in 1 hour at current speed(assuming speeds are in kmph or mph)
- detect_collision(it will also perform time_to_collision) function  uses simple relative physics to detect collision.Here I have created 8 different cases which depend upon whether there is 0 relative speed along any axis

   * Case 1: When there is relative motion in all directions
   * Case 2: When there is no relative motion in x-axis
   * Case 3: When there is no relative motion in Y-axis
   * Case 4: When there is no relative motion in Z axis
   * Case 5: When there is relative motion only in Z-axis
   * Case 6: when there is relative motion in only in X-axis
   * Case 7: when there is relative motion only in Y-axis
   * Case 8: when there is no relative motion in any axis
