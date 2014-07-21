//
//  EventDispatcher.h
//  MeYou
//
//  Created by hower on 5/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	事件派发器
 */
@interface EventDispatcher : NSObject
{
@private
	NSNotificationCenter *_handle;
}

/**
 *	@brief	添加通知监听
 *
 *	@param 	name 	通知名称
 *	@param 	target 	监听目标
 *	@param 	action 	监听处理
 */
- (void)addNotificationWithName:(NSString *)name
                         target:(id)target
                         action:(SEL)action;


/**
 *	@brief	移除通知监听
 *
 *	@param 	name 	通知名称
 *	@param 	target 	监听目标
 */
- (void)removeNotificationWithName:(NSString *)name
                            target:(id)target;


/**
 *	@brief	移除某个监听目标的所有通知
 *
 *	@param 	target 	监听目标
 */
- (void)removeAllNotificationWithTarget:(id)target;


/**
 *	@brief	派发通知
 *
 *	@param 	name 	通知名称
 *	@param 	data 	通知数据
 */
- (void)postNotificationWithName:(NSString *)name
                            data:(NSDictionary *)data;

@end
