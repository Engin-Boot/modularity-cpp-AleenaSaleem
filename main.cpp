#include "ColorCodeTests.h"
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

string getManual(int numberOfMajorColors, int numberOfMinorColors){
	int outerLoopCount=0, innerLoopCount=0, pairNumber = 1;
	string allPairs ="";
	for(outerLoopCount=0; outerLoopCount<numberOfMajorColors; outerLoopCount++){
	    for(innerLoopCount=0; innerLoopCount<numberOfMinorColors; innerLoopCount++){ 
		TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        	ostringstream ss;
        	ss << pairNumber;
        	string temp=ss.str()+" - "+colorPair.ToString();
        	temp += "\n";
		allPairs += temp;
   	        pairNumber++;
	    }
	}
	return allPairs;
}

void testCall(){
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
}

int main() {
    testCall();
    cout<<"\n-------End of tests-----\n";
    cout<<"\n\n Printing User Manual\n\n";
    cout<<getManual(TelCoColorCoder::numberOfMajorColors, TelCoColorCoder::numberOfMinorColors);
    return 0;
}
