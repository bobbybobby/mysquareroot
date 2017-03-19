# Loads mkmf which is used to make makefiles for Ruby extensions
require 'mkmf'

extension_name = 'squareroot'

create_makefile(extension_name)
