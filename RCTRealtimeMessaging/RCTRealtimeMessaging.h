//
//  RCTRealtimeMessaging.h
//  RCTRealtimeMessaging
//
//  Created by Joao Caixinha on 02/04/15.
//  Copyright (c) 2015 Realtime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTOrtcClient.h"
#import <React/RCTBridgeModule.h>
//#import "RCTBridge.h"
#import <React/RCTEventDispatcher.h>

@interface RCTRealtimeMessaging : NSObject<OrtcClientDelegate, RCTBridgeModule>
@property(retain, nonatomic)OrtcClient *ortcClient;
@property(retain, nonatomic)NSMutableDictionary *queue;
@property(retain, nonatomic)NSDictionary *pushInfo;

@end

