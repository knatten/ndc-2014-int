                                                                               "
nnoremap <space> :bn<CR>
nnoremap <BS> :bp<CR>
1,1000bdelete
hi NonText guifg=bg
command! -nargs=0 Cpp !clear;g++ -std=c++0x -o0 % && ./a.out
command! -nargs=0 Nm !clear;g++ -std=c++0x -o0 % -o obj.o && nm obj.o
nnoremap <F5> :Cpp<CR>
nnoremap <F6> :Nm<CR>
nnoremap <F2> :!bc<CR>
inoremap <F5> <ESC><ESC>:w<CR>:Cpp<CR>
inoremap <F6> <ESC><ESC>:w<CR>:Cpp<CR>
let g:fontsize=18
nnoremap <A-+> :let g:fontsize=g:fontsize+1<CR>:let &guifont="Monospace ".g:fontsize<CR>
nnoremap <A--> :let g:fontsize=g:fontsize-1<CR>:let &guifont="Monospace ".g:fontsize<CR>
autocmd BufRead,BufNewFile *.txt set nospell
autocmd BufRead,BufNewFile *.* :let cmd="echo ".expand("%")." > current_slide"|call system(cmd) 

n author.txt
\ intro.txt
\ whats-an-int.txt
\ sizeof.cpp
\ sizeof_all.cpp
\ sizeof_unsigned.cpp
\ char.cpp
\ limits.cpp
\ unsigned_overflow.cpp
\ unsigned_overflow.txt
\ signed_overflow.cpp
\ signed_overflow.txt
\ uninitialized.cpp
\ uninitialized2.cpp
\ static_uninitialized.cpp
\ static_uninitialized2.cpp
\ static_variables.cpp
\ abc.cpp
\ abc2.cpp
\ abc3.cpp
\ abc4.cpp
\ abc5.cpp
\ summary.txt
