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
//  PXDelegateLogger.h
//  Pixate
//
//  Created by Paul Colton on 12/8/12.
//  Copyright (c) 2012 Pixate, Inc. All rights reserved.
//

#ifdef PX_LOGGING
#import "PXLog.h"
#import "PXLoggingUtils.h"

@interface PXDelegateLogger : DDAbstractLogger <DDLogger>
-(id)initWithDelegate:(id <PXLoggingDelegate>)delegate;
@end
#endif
