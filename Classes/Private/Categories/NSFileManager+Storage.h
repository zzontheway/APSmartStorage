//
//  NSFileManager+Storage.h
//  APSmartStorageSpec
//
//  Created by Alexey Belkevich on 1/17/14.
//  Copyright (c) 2014 alterplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (Storage)

+ (BOOL)fileExistsAtPath:(NSString *)path;
+ (void)moveFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath;
+ (void)removeItemAtPath:(NSString *)path;
+ (void)createDirectoryAtPath:(NSString *)path;
+ (NSString *)documentsDirectoryPath;

@end