#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSoundStreamSetup(0, 1, this, 44100, beat.getBufferSize(), 4);
    ofBackgroundGradient( ofColor( 255 ), ofColor( 128 ) );
    ofSetBackgroundAuto(false);
    
    theta = 0;
    theta = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    beat.update(ofGetElapsedTimeMillis());

    theta += 1;

}

//--------------------------------------------------------------
void ofApp::draw(){
    //
    ofSetColor(0, 0, 0, 30);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    ofPushMatrix();						//Store the coordinate system
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // middle translate

    //Move the coordinate center to screen's center
    // 0
    
    ofSetColor(255, 0, 0, 255);
    // 1
    float scaleFactor = ofMap(beat.kick(), 0, 1, 1, 1.5);
    ofScale(scaleFactor, scaleFactor, 1);
    
    
    // 2
    //Calculate the rotation angle
    float time = ofGetElapsedTimef();	//Get time in seconds
    float angle = time * 10;			//Compute angle. We rotate at speed 10 degrees per second
    
    // 3
    ofRotate(ofMap(beat.snare(), 0, 1, 0, 360));			//Rotate the coordinate system along y-axe
    ofSetRectMode(OF_RECTMODE_CENTER);            // around center
    ofDrawRectangle(0, 0, 250, 250);              // draw the rect
    ofSetRectMode(OF_RECTMODE_CORNER);            // reset
    
    ofPopMatrix();	//Restore the coordinate system
    

}

//--------------------------------------------------------------
void ofApp::audioReceived(float* input, int bufferSize, int nChannels) {
    beat.audioReceived(input, bufferSize, nChannels);
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
