//
//  ShooterViewController.h
//  shooter
//
//  Created by amorales on 5/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShooterView.h"
#import "ShooterPlayer.h"

@interface ShooterViewController : UIViewController {

    CGPoint position;
}

@property (weak, nonatomic) IBOutlet ShooterView *shooter_view;
@property (nonatomic, retain) IBOutlet ShooterPlayer *player;

@end
