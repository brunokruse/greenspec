//
//  gsObject.h
//  greenspec-3
//
//  Created by Bruno Kruse on 3/1/15.
//
//

#ifndef __greenspec_3__gsObject__
#define __greenspec_3__gsObject__

#include "ofMain.h"

class gsObject {
    
public:
    
    gsObject() {
        shapeSize = 50.0f;
        shapeSpeed = 10.0f;
        theta = 0.1f;

    }

    void update() {
        
        // move angle
        theta += 0.1f;
        
        shapeSize += shapeSpeed;
        
        if (shapeSpeed <= 5) {
        //    shapeSpeed = 5;
            
        } else {
            shapeSpeed *= 0.99f;
        }
    }
    
    void render() {
        
        ofPushMatrix();
        
        //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        //ofRotate(theta);
        ofNoFill();
        ofSetColor(255, 255, 255);
        ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, shapeSize, shapeSize);
        
        ofPopMatrix();
        
    }
    
    float shapeSize;
    float shapeSpeed;
    float theta;
    
private:
    
};

#endif /* defined(__greenspec_3__gsObject__) */
