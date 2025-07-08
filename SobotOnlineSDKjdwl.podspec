#
#  Be sure to run `pod spec lint SobotOnlineSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
s.name             = "SobotOnlineSDKjdwl"

s.version          = "0.1.0"

s.summary          = "智齿客服在线SDK，支持APP直接对接 A marquee view used on iOS."
s.description      = <<-DESC
It is marquee view used on iOS, which implement by Objective-C.
DESC

s.homepage         = "https://github.com/ZCSDK/SobotOnlineSDKjdwl"
# s.screenshots      = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
s.license          = 'MIT'
s.author           = { 'zhangxy' => 'app_dev@sobot.com' }
s.source           = { :git => "https://github.com/ZCSDK/SobotOnlineSDKjdwl.git", :tag => s.version.to_s }
# s.social_media_url = 'https://twitter.com/NAME'

s.platform     = :ios, '12.0'
#s.ios.deployment_target = ‘6.1’
# s.osx.deployment_target = '10.7'
s.requires_arc = true

#  Binary/App normal arm64
#s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }


s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 arm64' }


# s.resource  = "icon.png"
s.resources = 'SobotOnline.bundle'
s.ios.vendored_frameworks = 'SobotOnline.framework','SobotCommon.framework','SobotOnlineBase.framework'

# s.ios.vendored_libraries = 'libSobotLib.a'
# s.preserve_paths = "FilesToSave", "MoreFilesToSave"


end

