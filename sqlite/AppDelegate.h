//
//  AppDelegate.h
//  sqlite
//
//  Created by Consultant on 3/14/19.
//  Copyright © 2019 JuanVitela. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

