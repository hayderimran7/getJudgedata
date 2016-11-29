A particular talent competition has four judges each of whom awards a score between 0 and 10 each. Fractional scores are allowed.

A performer's final score is determined by dropping the lowest score received and then averaging the three remaining scores.

Write a program that uses this method to calculate a contestant's scores. Note: read the contestants name and scores from an input file starsDance.txt attached.   There will be 10 contestants.

The program will need the following functions:

void getJudgeData() reads the name of the contestant and his or her scores. Scores should be validated (between 0 and 10)

void calcScore() should calculate and display the average of the three scores that remain after dropping the lowest score the performer received. This function should be passed the four scores.

Your program should also print the name and score of the winner - the person with the highest average score.
