#include "ofApp.h"

// write our boolean remove function
bool shouldRemove(gsObject &o){
    if(o.shapeSize > 2500 )return true;
    else return false;
}

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(60);
    ofSetCircleResolution(100);
    ofEnableAlphaBlending();
    ofSetRectMode(OF_RECTMODE_CENTER);

    // settings
    tempo = 5;
    ofSetLineWidth(5);
    
    ofSetFrameRate(60);
    
        
}

//--------------------------------------------------------------
void ofApp::update(){

    // set tempo
    tempo = ofMap(mouseX, 0, ofGetWidth(), 0, 50);
    
    // rate
    int rate = int(ofMap(mouseX, 0, ofGetWidth(), 10, 60));
    cout << "rate: " << rate << endl;
    if (ofGetFrameNum() % rate == 0) {
        shapeArr.push_back( gsObject() );
    }
    
    // circle res
    int circleRes = int(ofMap(mouseY, 0, ofGetHeight(), 2, 20));
    ofSetCircleResolution(circleRes);

    
    // loop through
    if (shapeArr.size() > 0) {
        for (int i = 0; i < shapeArr.size(); i++) {
            shapeArr[i].update();
        }
    }
    
    ofRemove(shapeArr, shouldRemove);


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);

    ofSetColor(0, 0, 0, 30);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    

    
    for (int i = 0; i < shapeArr.size(); i++) {
        shapeArr[i].render();
    }
        
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    shapeArr.push_back( gsObject() );
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
