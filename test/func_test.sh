#!/bin/sh
set -x
grep -n print test/example/cli.rb /dev/null > /tmp/expected
bin/mlg print test/example/cli.rb > /tmp/actual
diff /tmp/expected /tmp/actual
