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
  
   // Convert the input text message to uppercase
  string upperCaseMessage = "";
  for (int i = 0; i < textMessage.length(); i++) {
    upperCaseMessage += toupper(textMessage[i]);
  }
  
  // display to the user the abbreviated words
  if ((upperCaseMessage.find("IDK") != string::npos))
  {
    cout << "IDK: " << IDK << endl;
  }
  if ((upperCaseMessage.find("OMG") != string::npos))
  {
    cout << "OMG: " << OMG << endl;
  }
  if ((upperCaseMessage.find("ILY") != string::npos))
  {
    cout << "ILY: " << ILY << endl;
  }
  if ((upperCaseMessage.find("JK") != string::npos))
  {
    cout << "JK: " << JK << endl;
  } 
  if ((upperCaseMessage.find("BFF") != string::npos))
  {
    cout << "BFF: " << BFF << endl;
  }  
  if ((upperCaseMessage.find("TTYL") != string::npos))
  {
    cout << "TTYL: " << TTYL << endl;
  }  
  if ((upperCaseMessage.find("TMI") != string::npos))
  {
    cout << "TMI: " << TMI << endl;
  }  
  
  cout << "END." << endl;

  return 0;
} 
