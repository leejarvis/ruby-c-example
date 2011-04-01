require 'minitest/autorun'
require 'hello/hello'

class HelloTest < MiniTest::Unit::TestCase
  def test_sanity
    assert_equal 'Hello, World!', Hello.new.world
  end
end