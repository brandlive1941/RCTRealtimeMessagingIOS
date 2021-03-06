require "json"

package = JSON.parse(File.read(File.join(__dir__, "./package.json")))

Pod::Spec.new do |s|
  s.name         = "react-native-realtimemessaging-ios"
  s.version      = package["version"]
  s.summary      = package["description"]
  s.homepage     = package["homepage"]
  s.license      = { :type => package["license"], :file => "LICENSE" }
  s.author       = package["author"]
  s.platform     = :ios, "9.0"
  s.source       = { :git => package["repository"]["url"], :tag => "v#{package["version"]}" }
  s.source_files = 'RCTRealtimeMessaging/*.{h,m}', 'SocketRocket/*{h,m}'
  s.requires_arc = true

  s.dependency "React"
end