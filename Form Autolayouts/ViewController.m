//
//  ViewController.m
//  Form Autolayouts
//
//  Created by Pavankumar Arepu on 01/02/2016.
//  Copyright (c) 2016 ppam. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)firstGoAction:(id)sender
{
    NSMutableString *fistStudent = [NSMutableString stringWithFormat:@"%@-->%@-->%@-->%@-->%@",_firstFieldValue.text,_lastFieldValue.text,_ageValue.text,_couseValue.text,_IDValue.text];
    
    NSLog(@"firstStudent:%@",fistStudent);
    _firstTextViewValue.text = fistStudent;
}

- (IBAction)secondGoAction:(id)sender
{
    NSMutableString *secondStudent = [NSMutableString stringWithFormat:@"%@-->%@-->%@-->%@-->%@",_studentFirstFieldValue.text,_studentSecondFieldValue.text,_studentAgeValue.text,_studentCouseValue.text,_studentIDValue.text];
    NSLog(@"secondStudent:%@",secondStudent);

    
    _secondTextViewValue.text = secondStudent;
}
@end
