#include <iostream>
#include <string>

using namespace std;

  int row=10;
    int col=15;


    int playrx=7;               //player location at start
    int playry=0;
    int tplayrx=playrx;         //those are temporary storage of player location used to update position
    int tplayry=playry;

    int goalx=0;
    int goaly=14;
    string mover;       //command to move



int main() {

//commands ; u up, d down, l left, r right
int game[row][col]={};


    game[playrx][playry]=1;
    game[goalx][goaly]=8;

       for(int i=0;i<row;i++){
            for(int j=0;j<col;j++) //representing the 2d array
            {if (game[i][j]==8){cout << "X";} else
            if(game[i][j]==1){cout << "P";} else
                cout <<" ";
            }
            cout << endl;

       }




while(true){
        cin >> mover;
    if(mover=="u"){                    //if choice is up, move up

            tplayrx=tplayrx-1;
           game[tplayrx+1][tplayry]=0;  //trail is cleared
            if(game[tplayrx][tplayry]==8){cout << " YOU WIN ";break;}            //if 8 detected, break loop

                else {

                game[tplayrx][tplayry]=1; }

    }


    if(mover=="d"){

                tplayrx=tplayrx+1;
           game[tplayrx-1][tplayry]=0;  //trail is cleared
            if(game[tplayrx][tplayry]==8){cout << " YOU WIN ";break;}

                else {

                game[tplayrx][tplayry]=1; }
    }


   if(mover=="r"){

                tplayry=tplayry+1;
           game[tplayrx][tplayry-1]=0;  //trail is cleared
            if(game[tplayrx][tplayry]==8){cout << " YOU WIN ";break;}

                else {

                game[tplayrx][tplayry]=1; }
    }




   if(mover=="l"){

                tplayry=tplayry-1;
           game[tplayrx][tplayry+1]=0;  //trail is cleared
            if(game[tplayrx][tplayry]==8){cout << " YOU WIN ";break;}

                else {

                game[tplayrx][tplayry]=1; }
    }





     for(int i=0;i<row;i++){                        //refresh display
            for(int j=0;j<col;j++)
            {if (game[i][j]==8){cout << "X ";} else
            if(game[i][j]==1){cout << "P ";} else
                cout << " ";
            }
            cout << endl;

       }

}
       }








