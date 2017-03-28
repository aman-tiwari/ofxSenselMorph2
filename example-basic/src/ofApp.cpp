#include "ofApp.h"
#include "ofxSenselMorph.h"

ofxSenselMorph sensel;

float log_scale_top = 5.0f;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetColor(0);
    ofSetFrameRate(60);
    ofSetBackgroundColor(0);
    ofFill();

    ofSetWindowShape(ofGetWindowWidth(), (int)ofGetWindowWidth() *
                     ((float)sensel.rows() / (float)sensel.cols()));
    
}


uint8_t led_lit = 0;

//--------------------------------------------------------------
void ofApp::update(){
    sensel.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    auto rows = sensel.rows();
    auto cols = sensel.cols();
    const auto& forces = sensel.forces();
    
    auto scale_factor = ofGetWindowWidth() / (float) cols;
    
    ofPushMatrix();
    {
        ofScale(scale_factor, scale_factor);
        
        for(size_t row = 0; row < rows; row++) {
            for(size_t col = 0; col < cols; col++) {
                
                const auto f_xy_raw = forces[row * cols + col];
                
                float g = ofMap(log(f_xy_raw + 1.0)/log(10), 0,
                                log_scale_top, 0, 255);
                
                g = ofClamp(g, 0, 255);
                
                ofSetColor(g, g, g);
                ofDrawRectangle(col, row, 1, 1);
            }
        }
    }
    ofPopMatrix();
    
    float max_force = *std::max_element(forces.begin(), forces.end());

    std::cout << max_force << '\n';
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key) {
            case '<':
            case ',':
            log_scale_top = std::max(1.0f, log_scale_top - 1);
            break;
            case '>':
            case '.':
            log_scale_top = std::min(6.0f, log_scale_top + 1);
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
