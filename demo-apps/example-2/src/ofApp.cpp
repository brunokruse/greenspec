#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // set our framerate to 60 frames per second
    ofSetFrameRate(60);
    
    // we define our variables in the setup method
    theta = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    // update runs every frame before drawing
    theta += 1;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // clear our background every frames
    ofSetBackgroundColor(0);
    
    // this is the same as Processing setColor
    ofSetColor(255,0,0);
    
    // look familiar?
    ofPushMatrix();
    
        // translate to the middle of the screen
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // middle translate
        ofRotate(theta);                              // rotate
    
        // set our rectangle to draw from the center
        ofSetRectMode(OF_RECTMODE_CENTER);            // around center
        ofDrawRectangle(0, 0, 300, 300);              // draw the rect
    
        // reset the rectangle draw mode
        ofSetRectMode(OF_RECTMODE_CORNER);            // reset
    
    ofPopMatrix();
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
