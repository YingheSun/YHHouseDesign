//
//  Parts.h
//  YHHouseDesign
//
//  Created by 孙滢贺 on 16/1/28.
//  Copyright (c) 2016年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Images;

@interface Parts : NSManagedObject

@property (nonatomic, retain) NSString * atPosition;
@property (nonatomic, retain) NSString * detail;
@property (nonatomic, retain) NSString * kind;
@property (nonatomic, retain) NSString * mainImage;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *containedImages;
@end

@interface Parts (CoreDataGeneratedAccessors)

- (void)addContainedImagesObject:(Images *)value;
- (void)removeContainedImagesObject:(Images *)value;
- (void)addContainedImages:(NSSet *)values;
- (void)removeContainedImages:(NSSet *)values;

@end
