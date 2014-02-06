//
//  my_firstTests.m
//  my firstTests
//
//  Created by Marta Serrano on 06/02/14.
//  Copyright (c) 2014 Marta Serrano. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface my_firstTests : XCTestCase

@end

@implementation my_firstTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
    XCTFail(@"No implementation for \"%s\"", __PRETTY_FUNCTION__);
}

@end
