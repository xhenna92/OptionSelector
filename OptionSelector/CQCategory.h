//
//  CQCategory.h
//  OptionSelector
//
//  Created by Henna on 8/10/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CQCategory : NSObject

    @property (nonatomic) NSString * name;
    @property (nonatomic) NSArray * options;
    @property (nonatomic) NSString * selection;
    @property (nonatomic) NSUInteger index;

@end
