#include <iostream>
#include <mattgui.h>
#include <cstring>
int main() {int upperLimit = 100,lowerLimit = 0,opt=0,tries = 0,num=(lowerLimit+upperLimit)/2;std::cout<<"Think of a number between: "<<lowerLimit<<" and "<<upperLimit<<std::endl;
Sleep(3000);system("cls");while(opt!=2) {int opt = matt::gui::gui("Bigger   /Smaller   /That's it!   \n\nThe number you are thinking is "+to_string(num)+"/");system("cls");if(opt==0) {
lowerLimit = num;num = (upperLimit+num)/2;} else if(opt==1) {upperLimit = num;num = (lowerLimit+num)/2;}if(num==upperLimit || num==lowerLimit) {system("cls");std::cout<<"Oh come on!";
Sleep(3000);break;} else if(opt==2)break;tries++;}system("cls");std::cout<<"I gotcha in "<<tries<<" tries";return 0;}
