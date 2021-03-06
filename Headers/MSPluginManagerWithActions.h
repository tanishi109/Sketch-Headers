//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPluginManager.h"

#import "MSActionObserver.h"

@class NSDictionary, NSString;

@interface MSPluginManagerWithActions : MSPluginManager <MSActionObserver>
{
    BOOL _wilcardsEnabled;
    NSDictionary *_commandsWithHandler;
}

@property(nonatomic) BOOL wilcardsEnabled; // @synthesize wilcardsEnabled=_wilcardsEnabled;
@property(retain, nonatomic) NSDictionary *commandsWithHandler; // @synthesize commandsWithHandler=_commandsWithHandler;
- (void).cxx_destruct;
- (void)sendCommandActionWithID:(id)arg1 toPlugins:(id)arg2 withIdentifiers:(id)arg3 context:(id)arg4;
- (id)pluginsToSendStartupMessageToWithOldPlugins:(id)arg1 andNewPlugins:(id)arg2;
- (id)pluginsToSendShutdownMessageToWithOldPlugins:(id)arg1 andNewPlugins:(id)arg2;
- (id)enabledPluginsWithPlugins:(id)arg1;
- (void)actionController:(id)arg1 didInstantActionWithID:(id)arg2 context:(id)arg3;
- (void)actionController:(id)arg1 didFinishActionWithID:(id)arg2 context:(id)arg3;
- (void)actionController:(id)arg1 willBeginActionWithID:(id)arg2 context:(id)arg3;
- (void)sendToCommandActionsForPlugin:(id)arg1 withID:(id)arg2 context:(id)arg3;
- (void)sendToInterestedCommandsActionWithID:(id)arg1 context:(id)arg2;
- (id)contextForActionWithID:(id)arg1 context:(id)arg2;
- (void)buildHandlerIndex;
- (void)applicationWillTerminate:(id)arg1;
- (void)setPlugins:(id)arg1;
- (id)initWithPluginsFolderURLs:(id)arg1 updater:(id)arg2 pluginStateManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

