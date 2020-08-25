#include "ColorCodeTests.h"

void printManual(int numberOfMajorColors, int numberOfMinorColors){
	int outerLoopCount=0, innerLoopCount=0, pairNumber = 1;
	for(outerLoopCount=0; outerLoopCount<numberOfMajorColors; outerLoopCount++){
		for(innerLoopCount=0; innerLoopCount<numberOfMinorColors; innerLoopCount++){ 
			TelCoColorCoder::ColorPair colorPair =
        	TelCoColorCoder::GetColorFromPairNumber(pairNumber);
   			std::cout << pairNumber<< " - " << colorPair.ToString() << std::endl;
   			pairNumber++;
		}
	}
}

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
	std::cout<<"\n-------End of tests-----\n";
	std::cout<<"\n\n Printing User Manual\n\n";
	printManual(TelCoColorCoder::numberOfMajorColors, TelCoColorCoder::numberOfMinorColors);
    return 0;
}
