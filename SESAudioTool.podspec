Pod::Spec.new do |spec|

  spec.name         = "SESAudioTool"
  spec.version      = "0.0.1"
  spec.summary      = "iOS SDK platforms for SES Application."
  
  spec.description  = "This SESAudioTool is audio framework to support SES Application"

  spec.homepage     = "https://github.com/mncinnovation/SESAudioTool"

  spec.license      =  { :type => "Apache License, Version 2.0", :file => "LICENSE" }

  spec.author       = { "Ihksan Sukmawan" => "ihksan.sukmawan@mncgroup.com" }

  spec.platform     = :ios
  spec.ios.deployment_target = "11.0"

  spec.source       = { :git => "https://github.com/mncinnovation/SESAudioTool.git", :tag => "#{spec.version}" }

  spec.vendored_frameworks = "SESAudioTool.framework"

  spec.framework  = "UIKit"

  spec.dependency 'ffmpeg-kit-ios-audio', '4.5.LTS'
  
  spec.pod_target_xcconfig = {
     'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
