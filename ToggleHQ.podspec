Pod::Spec.new do |s|
  s.name = "ToggleHQ"
  s.version = "0.1.0"
  s.summary = "iOS SDK for ToggleHQ"
  s.homepage = "https://togglehq.com"
  s.license = { type: 'MIT', file: 'LICENSE' }
  s.authors = { "ToggleHQ" => 'feedback+ios@togglehq.com' }
  s.ios.deployment_target = '8.0'

  s.source           = { :git => 'https://github.com/togglehq/togglehq-ios-cocoapod.git', :tag => s.version.to_s }

  s.frameworks = 'UIKit', 'QuartzCore', 'Foundation'
  s.default_subspec   = 'AllFeaturesLib'

  s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'Underscore.m'
  s.dependency 'STPopup'

  s.subspec 'AllFeaturesLib' do |ss|
    ss.vendored_frameworks = "ToggleHQ.framework"
    ss.resource_bundles = {
      'ToggleHQResources' => ['Assets/*.{png,xib,nib}']
    }
  end
end
