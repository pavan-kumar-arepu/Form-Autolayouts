//
//  ViewController.h
//  Form Autolayouts
//
//  Created by Pavankumar Arepu on 01/02/2016.
//  Copyright (c) 2016 ppam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *firstFieldValue;
@property (weak, nonatomic) IBOutlet UITextField *lastFieldValue;
@property (weak, nonatomic) IBOutlet UITextField *ageValue;
@property (weak, nonatomic) IBOutlet UITextField *couseValue;
@property (weak, nonatomic) IBOutlet UITextField *IDValue;

@property (weak, nonatomic) IBOutlet UITextView *firstTextViewValue;


@property (weak, nonatomic) IBOutlet UIButton *firstGoButton;




@property (weak, nonatomic) IBOutlet UITextField *studentFirstFieldValue;
@property (weak, nonatomic) IBOutlet UITextField *studentSecondFieldValue;
@property (weak, nonatomic) IBOutlet UITextField *studentAgeValue;
@property (weak, nonatomic) IBOutlet UITextField *studentCouseValue;
@property (weak, nonatomic) IBOutlet UITextField *studentIDValue;

@property (weak, nonatomic) IBOutlet UITextView *secondTextViewValue;


@property (weak, nonatomic) IBOutlet UIButton *secondGoButton;

- (IBAction)firstGoAction:(id)sender;
- (IBAction)secondGoAction:(id)sender;



@end

