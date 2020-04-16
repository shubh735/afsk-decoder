#include <iostream>
#include "../lib/audiofile/AudioFile.h"

using namespace std;

auto main(int argc, char** argv) -> int {
	if(argc < 2) {
		cout << "usage: decode <wav-file>" << endl;
		return 0;
	}
	const std::string fileName = argv[1];
	cout << "loading " << fileName << endl;

	AudioFile<double> audioFile;
	audioFile.load(fileName);

	cout << "loaded file" << endl;
	audioFile.printSummary();

	return 0;
}