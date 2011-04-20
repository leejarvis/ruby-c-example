Compiling
---------

Either `cd ext/hello` and run `ruby extconf.rb` and make yourself, or just run
`rake compile` (Ensure you have the rake-compiler gem installed). Then open IRB:

    $ irb -Ilib -rhello
    >> Hello.new.world
    => "Hello, World!"

Told you it was simple!
