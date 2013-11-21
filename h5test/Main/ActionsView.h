//
//  ActionsView.h
//  h5test
//
//  Created by lihejun on 13-11-21.
//  Copyright (c) 2013年 芈峮. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{
    originalType = 0,
    q90Type,
    q75Type
}ActionType;

@interface ActionsView : UIView
@property (nonatomic, assign)ActionType type;
@property (nonatomic, weak)id observer;
@property (weak, nonatomic) IBOutlet UISegmentedControl *typeSegements;

+ (ActionsView *)actionsView:(id)observer;
- (IBAction)allSend:(id)sender;

@end
