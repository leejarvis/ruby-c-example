require "minitest/autorun"
require "hello_c"

class TestHelloC < MiniTest::Unit::TestCase
  def test_sanity
    assert_equal "Hello, World!", HelloC.new.world
  end
end
