//
//  EntityViewController.h
//  DBCourseWork
//
//  Created by Виктор Шаманов on 12/15/13.
//  Copyright (c) 2013 Victor Shamanov. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface EntityViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>

@property (weak) IBOutlet NSTableView *tableView;

@property (weak, nonatomic) NSWindow *parentWindow;
@property (strong, nonatomic) NSManagedObjectContext *context;

- (IBAction)addButtonPressed:(NSButton *)sender;

@end
