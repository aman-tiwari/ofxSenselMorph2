# ofxSenselMorph2

## Installation
Clone this repository into your addons folder:
`git clone https://github.com/aman-tiwari/ofxSenselMorph2.git`

**OSX**: Copy libSensel.dylib to `/usr/lib`

**Linux**: Copy libSensel.so to `/usr/lib`

## Usage

```c++
ofxSenselMorph sensel;

/*
 * or: ofxSenselMorph sensel(SENSEL_FRAME_CONTENT_PRESSURE_MASK | SENSEL_FRAME_CONTENT_CONTACTS_MASK) if you want the computed contacts as well
 */

void ofApp::update() {
	sensel.update();
	
	size_t rows = sensel.rows();
	size_t cols = sensel.cols();
	
	// forces is a rows * cols length vector,
	// with the force at (x, y) at forces[y * rows + x]
	std::vector<float> forces = sensel.forces();
	
	// you need to use the SENSEL_FRAME_CONTENT_CONTACTS_MASK flag in the constructor to get the contacts:
	std::vector<contact_t> contacts = sensel.contacts();
	
	// the labels for the contacts (up to 16 can be tracked at once)
	std::vector<uint8_t> labels = sensel.labels();
	
	// alternatively:
	std::vector<std::pair<uint8_t, contact_t>> label_contacts = labeledContacts();
	
	// set the first led to half brightness
	// brightness goes from 0 to 255
	// there are 24 leds.
	sensel.led(0, 128);
}
```

Look at [sensel-api-c-pp](https://github.com/sensel/sensel-api-c-cpp/blob/master/sensel.h) for the list of flags the constructor can take.

Look at [example-basic](https://github.com/aman-tiwari/ofxSenselMorph2/tree/master/example-basic) for a working demo. Look at the source code in the `src` folder for more information.