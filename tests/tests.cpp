/*
   Author: Corentin ROZET
   Create Time: 2022-09-20 15:16:16
   Modified by: Corentin ROZET
   Modified time: 2022-09-20 15:32:43
   Description:
*/

#include <iostream>
#include <gtest/gtest.h>

void HelloWorld(void);

TEST(main, stdoutput) {
    testing::internal::CaptureStdout();
    HelloWorld();
    std::string output = testing::internal::GetCapturedStdout();
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}