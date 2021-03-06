//
//  DiscPublishing.h
//  DiscPublishing
//
//  Copyright (c) 2010 OsiriX. All rights reserved.
//

#import <OsiriXAPI/PluginFilter.h>
#import "DiscPublishingTool.h"

@class DiscPublishingFilesManager;

@interface DiscPublishing : PluginFilter {
	DiscPublishingFilesManager* _filesManager;
	NSTimer* _robotReadyTimer;
	BOOL _robotIsReady;
	NSTimer* _toolAliveKeeperTimer;
    NSDistantObject<DiscPublishingTool>* _tool;
    NSLock* _robotReadyThreadLock;
}

@property(retain,readonly,nonatomic) NSDistantObject<DiscPublishingTool>* tool;

+(DiscPublishing*)instance;

+(BOOL)testing;

+(NSString*)baseDirPath;
+(NSString*)discsDirPath;
+(NSString*)discCoverTemplatesDirPath;

-(void)updateBinSelection;

@end
