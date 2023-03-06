/*****************************************************************************
# Author:           Devri Anderson 
# Lab:              Assignment #5
# Date:             October 28, 2021
# Description:      This program decodes mysterious abbreviation lingo!
# Input:            textMessage   
# Output:           textMessage
# Sources:          ZyBooks Ch. 5
******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

const string IDK = "I don't know";
const string OMG = "Oh my god";
const string ILY = "I love you";
const string JK = "Just kidding";
const string BFF = "Best friend forever";
const string TTYL = "Talk to you later";
const string TMI = "Too much information";

int main() {
  string textMessage = " ";

  cout << "Welcome to my text message abbreviation decoder!" << endl << endl;

  cout << "Enter a single line text message: ";
  getline(cin, textMessage);
  cout << endl;

  
  cout << "You entered: " << textMessage << endl << endl;
  if ((textMessage.find("IDK") != string::npos))
  {
    cout << "IDK: " << IDK << endl;
  }
  if ((textMessage.find("OMG") != string::npos))
  {
    cout << "OMG: " << OMG << endl;
  }
  if ((textMessage.find("ILY") != string::npos))
  {
    cout << "ILY: " << ILY << endl;
  }
  if ((textMessage.find("JK") != string::npos))
  {
    cout << "JK: " << JK << endl;
  } 
  if ((textMessage.find("BFF") != string::npos))
  {
    cout << "BFF: " << BFF << endl;
  }  
  if ((textMessage.find("TTYL") != string::npos))
  {
    cout << "TTYL: " << TTYL << endl;
  }  
  if ((textMessage.find("TMI") != string::npos))
  {
    cout << "TMI: " << TMI << endl;
  }  
  
  cout << "END." << endl;

  return 0;
} 