# gnl_eval
Simple test for 42 project "get_next_line".
To use it, go in the folder containing your file :

```
git clone https://github.com/nclabaux/gnl_eval && cd gnl_eval && make
./tester <filename>
```

The buffer_size can be modified on the first line of Makefile.

The provided .txt files are :
* tester.txt which contains some basic tests, such as an empty line
* verylongline.txt which contains a 2500+ characters line
* words.txt which is a dictionnary (useful to make thr program run for a little while to check leaks for example)

You can also use '/dev/random/' as a filename to generate random text.
