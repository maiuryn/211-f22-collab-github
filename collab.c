// Collaborative code file, Lab 13
// 
// One person in your partner group should clone this repository.
// Create a function that outputs your name, along with either one thing 
//    that you learned about git or GitHub or something that gave you trouble
//    that you would like others to learn from. The function name should be
//    your NetID combined with your partner's NetID.
// Feel free to add other things to your function as well, though be mindful
// of the length of it, given how many students will be collaborating on this code!
// 
// Read through the code that is already here before adding your own.
// Add this code to the repository using git commands.
// 
// An example is shown below.
// 
// UIC CS 211, Fall 2022
#include <stdio.h>

void reed_ekidan2() {
  printf("Dale Reed and Ellen Kidane\n");
  printf("We learned that git and GitHub are amazing, powerful tools!\n");
}

void sho28_hthan2() {
  printf("Sebastian Ho and Htin Linn Htoo Than\n");
  printf("We learned that there are staged and unstaged files.\n");
  printf("Unstaged files are files that were edited since the last time you commited.\n");
  printf("Staged files are files in the state that you previously added using add.\n");
  printf("These are the files that will be uploaded to the repository when you do a push.\n");
}

int main()
{
    printf("This code has been created by the students of CS 211, Fall 2022!\n\n");
    
    sho28_hthan2();
    reed_ekidan2();
    
    return 0;
}
