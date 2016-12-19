/*
 * Copyright 2012-present Pixate, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  PXStyleCache.h
//  Pixate
//
//  Modified by Anton Matosov on 12/30/15.
//  Created by Kevin Lindsey on 10/2/13.
//  Copyright (c) 2013 Pixate, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXStyleable.h"

@interface PXStyleTreeInfo : NSObject

@property (nonatomic, readonly) NSString *styleKey;
@property (nonatomic, readonly) BOOL cached;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithStyleable:(id<PXStyleable>)styleable NS_DESIGNATED_INITIALIZER;

- (void)applyStylesToStyleable:(id<PXStyleable>)styleable;

@end
