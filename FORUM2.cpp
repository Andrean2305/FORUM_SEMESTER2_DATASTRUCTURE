#include<iostream>
using namespace std;

void Tower(int disk, string tower1, string tower2, string tower3){
    if (disk == 1) { //This is the base case
        cout<<"Put the top disk in tower " << tower1 << " to tower " << tower3 << endl;
        return; //Void return to indicate the last step of the tower(tower of hanoi completed)
    }

    Tower(disk - 1, tower1, tower3, tower2); //This is the general case
    cout<<"Put the top disk in tower " << tower1 << " to tower " << tower3 << endl; //To print out the disk moves
    Tower(disk - 1, tower2, tower1, tower3); 
}
int main(){
    int disk;
    cout << "With this program, you can solve tower of hanoi just by inputting amount of disk" << endl;
    cout << "The target of this program is to make all of the disk from the tower 1 goes to tower number 3 with the minimum moves possible" << endl << endl;
    
    cout<<"Enter amount of disks: "; //user can input the number of disk(>1)
    cin>>disk;

    if(disk<1){
        cout <<"You need to input at least 1 disk";
    }else{
        cout <<"There are " << disk << " disks in tower 1" << endl;

        Tower(disk, "number 1", "number 2", "number 3"); //Calling the recurssion function

        cout << endl << disk << " all of the disks in tower 1 is now already in tower 3";
    }

    return 0;
}