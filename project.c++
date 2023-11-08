#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include<string.h>
#include <ctime>
#include<windows.h>
using namespace std;
void space() { cout << "\n\n\n"; }
//change
void startscreen()
{
    char ch = 1;
    space();
    cout << "\t\t\t\t\t     TYPING SPEED TEST IN C++   \n";
    space();
    cout << "\t\t\t***************************\n";
    cout << "\t\t\t|   CHECK YOUR TYPING SPEED AND EVALUATE YOUR PERFORMANCE " << ch << "               | \n";
    cout << "\t\t\t|   ENTER YOUR NAME AND START TYPING =>                                   |\n";
    cout << "\t\t\t***************************\n\t\t\t\t\t\t";
}
void homescreen(string name)
{
	cout<<"**********************************************************************" ;
  
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tWELCOME " << name << "     \n";
    space();
    cout << "\t\t\t\t\t\t \t\t\t\t\t   TYPING SPEED TEST IN C++ \n\n\n";
    	cout<<"***********************************************************************" ;
    space();
    cout << "LET'S SEE OUR TYPING SPEED PERFORMANCE AND EVALUATE HOW FAST AND ACCURATE WE CAN TYPE ===>  \n";
    space();
}
 void user_interface(string name)
 {string b;
   homescreen(name);
    redo:
   cout << "To start the Test, press enter \'R-key\' \n";
    getline(cin,b);
//   curr_word = strlwr(curr_word);
   if (b != "r")
     {
       cout << "Please press the valid key : \n";
       goto redo;
     }system("cls");
      cout << "\t\t\t YOUR TEST STARTS, start typing \n\n\n";
 }
 void userStatus(double seconds, int error, int x, double y , string name)
{
      system("cls");
    //  homescreen(name);
     cout << "\n\t\t\t\t\t\t\t\t   " << name << "'S TYPING STATS  "
         << "\n\n";
      cout << "\t\t\t\t\t\t\t\tTYPING THE SENTENCE TOOK  : " << seconds << "\n";
      cout << "\t\t\t\t\t\t\t\tYOUR TYPING SPEED IS : " << "\n";
      cout << "\t\t\t\t\t\t\t\tWORDS/SECOND  : " << (seconds/6) <<"\n";
      cout << "\t\t\t\t\t\t\t\tWORDS/MINUTE  : " << (seconds/6)*60 << "\n\n\n";
      cout << "\t\t\t\t\t\t\t\tTOTAL WORDS  : " << x << "\n";
      cout << "\t\t\t\t\t\t\t\tTOTAL ERROR  : " << error<< "\n";
      cout << "\t\t\t\t\t\t\t\tYour accuracy is %"  << y << "\n";
}
int main ()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
int i; 


    //Clock starts running, user is prompted to enter word on-screen
int c=0;
int s=0;
string name;string r;
startscreen();
getline(cin,name);
 system("cls");
 st:
 SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
user_interface(name);
    clock_t start, end;

    cout<< "Enter the following words: \n \n";
    string sentence;

    //Program "reads" test.text through file streaming, clock still running

    string line;
    ifstream myfile ("test.txt");
    int error = 0;
    if (myfile.is_open())
    {
    while ( myfile.good() )
    {
 
      getline (myfile,line);
      cout << line << endl;
    //Code for data input, clock still running, this and above are visible to user from the start-up of the program
      cout<<"\n";
               start = clock();
           getline(cin,sentence);
    //Code to determine input accuracy


    }
    
    

    for(i=0; i<line.length();i++){
        if(line[i]!=sentence[i]){
         error++;
        }
    }

    myfile.close();
    }
    //Clock ends running, data gathered is displayed to user
    end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    
    // (seconds/6) <<" words per  second or "<< (seconds/6)*60<< " words per minute. \n \n";
   int x = line.size() ;
  double y =  static_cast<double>( ( line.size() - error ) ) / line.size()  * 100 ;
   
   userStatus(seconds, error , x , y , name);
   
 
    cout<<"THANKS FOR PLAYING "<<"\n\n\n\n\n\n";
    Sleep(5000);
    system("cls");
    
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::+\n"
                 "      =%=.   :+%:                                                       .#*-.  :+%-      +\n"
                 "     -@.       -@.                   .-=++*****++=-.                    @=       .@-     +\n"
                 "  :=*%%        .@:              :=*##**+===---===++*##*=.              :@.        #%+-  +\n"
                 ":%*:          .#*            :*%#+=-------------------=+#%+:            ##        ..:-##.+\n"
                 "@-            :*#-         =%#+---------------------------=#%=         :*#:            =@*\n"
                 "@               .*%-     =@#=--*%------------------------++-=*%=     :##:               @%\n"
                 "#*       :        .+%= :%%=--+@*==%*-==--------------=*--=%#=-=#%: -#*.        .       +%*\n"
                 " =#*===*###-         +%@*---*%=-+@*-+@+---------------%#---#%---+@@+.        :#%#+---+%+ +\n"
                 "    :::.  .+%=       =@++++++++**+++++++++++++++++++++*++++%++++*@#       -#*:  :---.   +\n"
                 "             +%=    -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    -%*.            +\n"
                 "               =%+  @@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@- =%+.              +\n"
                 "                 =%#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@%=                 +\n"
                 "        -==========%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@===========:       +\n"
                 "       %%========================================================================%+      +\n"
                 "       *@************************************************************************%-      +\n"
                 "         ..........+@:::::::::::::--::::::::::::::::::::::::::::::::#%                   +\n"
                 "                   .@=        .+%@@@@%*:         .+#@@@@%*:        .@+                   +\n"
                 "                    +@.      =@@@@@@@@@@*       =@@@@@@@@@@#       #%                    +\n"
                 "                     #%     .@@@@@@@@@@@@*     :@@@@@@@@@@@@+     +@:                    +\n"
                 "                      %#    .@@@@@@@@@@@@#     :@@@@@@@@@@@@+    +@:                     +\n"
                 "                       *%.   =@@@@@@@@@@@:      #@@@@@@@@@@%.   *%:                      +\n"
                 "                        -%+   :*@@@@@@%+.        =#@@@@@@%+   =@+                        +\n"
                 "                          +%+    :--:.    :*##=     .:-:.   =%*.                         +\n"
                 "                            +%*-          =@@@#          -*@*.                           +\n"
                 "                            :#@@##+-:       .       :-+#%@@*.                            +\n"
                 "                          -##=@-  :-+@%###*****###@%+=:  #%-#*.                          +\n"
                 "                        -#*. %%:    :@    ..@:.   +#     .@= :##:                        +\n"
                 "                      =%+.  :@-=**=:*#      %.    :@..-+***@   :*#-                      +\n"
                 "                    +%=     +@    :=@#**++==@===+++@#=:.   @:    .*%-                    +\n"
                 "          -+***=:.+%=       *@*-   :@.   ...@:.    **    .+@+      .+%= :=***=:          +\n"
                 "        =%=.   :*%-         #*.=*#+*%       %.     -@:=*#*-#*         +%+:  .:*%:        +\n"
                 "       =@.               .+%#%    .-+****+==@+==+**#*=-.   %%%-                -@.       +\n"
                 "       *#              .*%= .@:          ..::::.          :@..+%=               @-       +\n"
                 "       .@=            +@-    =%                           %=    *@:            *%        +\n"
                 "         +#*==:        #*     +%.                       .#+     %+        -==*#=         +\n"
                 "            :@=        =@      :#+.                    +#:     :@.        ##:.           +\n"
                 "             =%:      .%=        :*#=:             :=**:        #*       -@:             +\n"
                 "              :##=--=##:            :=******+***+*+=:            =%*=--+#*.              +\n"
                 "                                                                                         +\n"
                 "                                                                                         +\n"
                 "                                                                                         +\n"
                 "                                                                                         +\n"
                 "                          Made By:-                                                      +\n"
                 "                                                                                         +\n"
                 "                               Manan Malik 22BEC1245                                     +\n"
                 "                               Vinay       22BEC1247                                     +\n";


  
    system("PAUSE");
    return EXIT_SUCCESS;

    //end of program

}
