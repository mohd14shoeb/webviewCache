//
//  ResponseTime.m
//  h5test
//
//  Created by 芈峮 on 13-11-22.
//  Copyright (c) 2013年 芈峮. All rights reserved.
//

#import "ResponseTime.h"

@implementation ResponseTimeObj

-(ResponseTimeObj *)initWithUrl:(NSString * )url
{
    self = [super init];
    _url = url;
    return self;
}

- (NSTimeInterval)getResponseTime
{
    return [_afterLoadTime timeIntervalSinceDate:_beforeLoadTime];
}

@end

@implementation ResponseTime

static ResponseTime * instance;

+ (ResponseTime *) shareInstance
{
    if (instance == nil) {
        instance = [[ResponseTime alloc] init];
    }
    return instance;
}


- (ResponseTime *) init
{
    instance = [super init];
    _totalResposeTime = 0;
    _pageResponseTime = [[NSMutableArray alloc] init];
    return instance;
}
@end
