Gem::Specification.new do |s|
  s.name        = 'mysquareroot'
  s.version     = '0.0.0'
  s.date        = '2017-03-19'
  s.summary     = "Test squareroot"
  s.description = "Test squareroot"
  s.authors     = ["Quentin"]
  s.email       = 'quentin.richaud@1d-lab.eu'
  s.files       = ["lib/mysquareroot.rb", "ext/squareroot/squareroot.c"]
  s.extensions  = ["ext/squareroot/extconf.rb"]
  s.homepage    =
    'http://1d-lab.eu'
  s.license       = 'MIT'
end
