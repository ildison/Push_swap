# Push_swap
The goal of the project is to create two programs: `./push_swap` and `./checker`.

***./push_swap*** sorts the input array of non-repeating numbers and outputs to stdout the commands used.
##### Available commands for stacks:
`sa` `sb` `ss` swap the first 2 elements at the top of stack A/B/both

`pa` `pb` take the first element at the top of B/A and push it at the top of A/B

`ra `rb` rr` rotate all elements of stack A/B/both , the first element becomes the last one.

`rra` `rrb` `rrr` reverse rotate all elements of stack A/B/both, the last element becomes the first one.

***./checker*** like ./push_swap takes non-repetitive numbers and reads from stdin commands which will sort the stack. Then checks whether the array is sorted.

## Vizualization
<img src="https://github.com/ildison/Push_swap/blob/master/src/visualizer/gifs/ps1.gif"/>
<img src="https://github.com/ildison/Push_swap/blob/master/src/visualizer/gifs/ps2.gif"/>

## Install & Usage
### Install
`git clone https://github.com/ildison/Push_swap.git push_swap; cd push_swap`
### Usage

```
./push_swap "non-repeating numbers"
```

```
./checker [flag] "non-repeating numbers"
```

`Flag -v - for visualisation`

You can run the two together using:

```
*ARG="non-repeating numbers"; ./push_swap $ARG | ./checker [flag] -v $ARG*
```

Or use script:

```
./start [from] [to]
```

`Example: ./start -10 190`

### Control keys for visualisation mode:
`Play/pause     - space` 

`prev/next step - "pause" left/right`

`speed          - up/down`
