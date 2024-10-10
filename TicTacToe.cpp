#include<iostream>
using namespace std;

class TicTacToe{
   public:
        char gameSpace[4][4];
        string name1;
        string name2;
        TicTacToe(); 
        int checkwincondition(char character);
       void play();
       void printgrid();

};
TicTacToe::TicTacToe(){
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        gameSpace[i][j]='-';
        }
    }
    cout<<"X user name:"<<endl;
    cin>>name1;
    cout<<"O user name:"<<endl;
    cin>>name2;


}
void TicTacToe::printgrid(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<gameSpace[i][j]<<" ";
        }
        cout<<endl;
    }
}
void TicTacToe::play(){
    int emptySpaces=16;
    while(emptySpaces!=0){
    cout<<"X user please put an x";
    int i,j;
    cin>> i>> j;
    if(gameSpace[i][j]!='-'){
    do{
    cout<<"Please enter an empty position"<<endl;
    cin>>i>>j;
    }while(gameSpace[i][j]!='-');
    
    }
    gameSpace[i][j]='x';
    emptySpaces--;
    printgrid();
    if(checkwincondition('x')==1){
         cout<<name1<<" has won!"<<endl;
         return;
    }
    cout<<"O user please put an O";
    cin>> i>> j;
    if(gameSpace[i][j]!='-'){
    do{
    cout<<"Please enter an empty position"<<endl;
    cin>>i>>j;
    }while(gameSpace[i][j]!='-');
    
    }
    gameSpace[i][j]='o';
    emptySpaces--;
    printgrid();
    if(checkwincondition('o')==1){
         cout<<name2<<" has won!"<<endl;
         return;
    }
        
    }
}
int TicTacToe:: checkwincondition(char x){
    if(gameSpace[0][0]==x && gameSpace[1][1]==x && gameSpace[2][2]==x && gameSpace[3][3]==x ){
        cout<<"condition 1";
        return 1;
    }
     if(gameSpace[0][3]==x && gameSpace[1][2]==x && gameSpace[2][1]==x && gameSpace[3][0]==x ){
        cout<<"condition 2";
        return 1;
    }
    for(int i=0;i<4;i++){
        if(gameSpace[i][0]==x && gameSpace[i][1]==x && gameSpace[i][2]==x && gameSpace[i][3]==x ){
            cout<<"condition 3";
            return 1;
        }if(gameSpace[0][i]==x && gameSpace[1][i]==x && gameSpace[2][i]==x && gameSpace[3][i]==x){
            cout<<"condition 4";
            return 1;
        }

    }

}

int main(){
TicTacToe t1=TicTacToe();
t1.play();

return 0;
}