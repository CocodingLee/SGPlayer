//
//  SGFFPacket.h
//  SGPlayer
//
//  Created by Single on 2018/1/22.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGFFObjectPool.h"
#import "avformat.h"

@interface SGFFPacket : NSObject <SGFFObjectPoolItem>

@property (nonatomic, assign) int streamIndex;

@property (nonatomic, assign) long long position;
@property (nonatomic, assign) long long duration;
@property (nonatomic, assign) long long size;

- (void)fill;
- (AVPacket *)corePacket;

@end
