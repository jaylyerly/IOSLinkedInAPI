// LIALinkedInAuthorizationViewController.h
//
// Copyright (c) 2013 Ancientprogramming
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
#import <UIKit/UIKit.h>
#import "LIALinkedInApplication.h"

typedef void(^LIAAuthorizationCodeSuccessCallback)(NSString *code);
typedef void(^LIAAuthorizationCodeCancelCallback)(void);
typedef void(^LIAAuthorizationCodeFailureCallback)(NSError *errorReason);

/**
 * View Controller subclass containing a `UIWebView` which will be used to display the LinkedIN web UI to perform the login.
 **/
@interface LIALinkedInAuthorizationViewController : UIViewController

@property(nonatomic, readonly) UIWebView *authenticationWebView;
@property(nonatomic, readonly) NSDictionary<NSString *, NSString *> *extraHeaders;

/** ************************************************************************************************ **
 * @name Initializers
 ** ************************************************************************************************ **/

/**
 * Default initializer.
 * @param application A `LIALinkedInApplication` configured instance.
 * @param success A success block.
 * @param cancel A cancel block.
 * @param failure A failure block.
 * @returns An initialized instance
 **/
- (id)initWithApplication:(LIALinkedInApplication *)application 
	              success:(LIAAuthorizationCodeSuccessCallback)success 
				   cancel:(LIAAuthorizationCodeCancelCallback)cancel 
				  failure:(LIAAuthorizationCodeFailureCallback)failure;

@end
