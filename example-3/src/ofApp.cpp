#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // setup our stage
    ofBackground(255, 255, 255);
    ofSetVerticalSync(true);
    
    // load our movie from the /bin folder
    myMovie.load("base ten-SD.mp4");
    myMovie.setLoopState(OF_LOOP_NORMAL);
    myMovie.play();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // update our movie every frame
    myMovie.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // remember to draw it
    myMovie.draw(0, 0, ofGetWidth(), ofGetHeight());

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    // mess with video speed based on mouse position
    int width = ofGetWidth();
    float pct = (float)x / (float)width;
    float speed = (2 * pct - 1) * 5.0f;
    myMovie.setSpeed(speed);
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    // scrub the movie based on mouse position on drag
    int width = ofGetWidth();
    float pct = (float)x / (float)width;
    myMovie.setPosition(pct);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
