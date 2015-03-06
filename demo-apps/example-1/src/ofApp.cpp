#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // start our background off as black
    ofBackground(0, 0, 0);
    ofSetBackgroundAuto(false);
    generate = false;
    
    // customize settings
    ofSetLineWidth(3);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (generate) {
        
        for (int i = 0; i < 25; i++) {
            
            // random color
            ofSetColor(ofRandom(0, 255),
                       ofRandom(0, 255),
                       ofRandom(0, 255));
            
            // random lines
            ofDrawLine(ofRandom(0, ofGetWidth()),
                       ofRandom(0, ofGetHeight()),
                       ofRandom(0, ofGetWidth()),
                       ofRandom(0, ofGetHeight()));
        }
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

    // everytime the mouse is pressed generate some graphics
    // in the draw loop
    
    ofBackground(0, 0, 0);
    generate = true;
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    // once the mouse is released pause the generation
    generate = false;
    
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
