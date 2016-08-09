#
# Be sure to run `pod lib lint ToggleHQ.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name = "ToggleHQ"
  s.version = "0.1.0"
  s.summary = "iOS SDK for ToggleHQ"
  s.homepage = "https://togglehq.com"
  s.license = { type: 'MIT', file: 'LICENSE' }
  s.authors = { "ToggleHQ" => 'feedback+ios@togglehq.com' }
  s.ios.deployment_target = '8.0'

  s.source           = { :git => 'https://github.com/mikefogg/togglehq-ios-cocoapod.git', :tag => s.version.to_s }

  s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'Underscore.m'
  s.dependency 'SCLAlertView-Objective-C'

  s.source_files = 'ToggleHQ.framework/**/*'
  s.public_header_files = 'ToggleHQ.framework/Headers/*{.h}'
  s.resources = ['ToggleHQ/**/*.{xib,nib}']

  s.frameworks = 'UIKit', 'QuartzCore', 'Foundation'
  s.vendored_frameworks = "ToggleHQ.framework"
end
