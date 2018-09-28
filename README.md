# DCNNF
This library provides conversion functions from json CNN format to DCNNF format and vice versa
# DCNNF format specification
DCNNF is binary format.

Here is the BNF of the format:
```
<FILE>                ::= <HEADER> <NUMBER_OF_LAYERS> <LAYERS> <DATA>
<HEADER>              ::= "DCNNF   " - 8 bytes
<NUMBER_OF_LAYERS>    ::= <SIZE>
<SIZE>                ::= uint64_t ; Little Endian
<BYTE>                ::= uint8_t ; Little Endian
<LAYERS>              ::= <LAYER_CONFIG> <LAYERS> | <LAYER_CONFIG>
<LAYER_CONFIG>        ::= <NAME> <INPUTS> <LAYER_TYPE> <LAYER>
<LAYER_TYPE>          ::= uint64_t ; Little Endian
<LAYER>               ::= <INPUT> | <CONV2D> | <BIAS> | <ACTIVATION> | <POOLING> | <DENSE> | <BATCH_NORMALIZATION> | <CONCAT> | <FLATTEN>
<NAME>                ::= <NAME_LENGTH> <BYTES>
<BYTES>               ::= <BYTE> <BYTES> | <BYTE>
<INPUTS>              ::= <NUMBER_OF_INPUTS> <INPUT_NAMES>
<INPUT_NAMES>         ::= <NAME> <INPUT_NAMES> | <NAME>
<NAME_LENGTH>         ::= <SIZE>
<NUMBER_OF_INPUTS>    ::= <SIZE>
<INPUT>               ::= <DIMENSION> <SIZES>
<CONV2D>              ::= <SIZE_X> <SIZE_Y> <INPUT_NUMBER_OF_CHANNELS> <NUMBER_OF_FILTERS> <PADDING> <STRIDE_X> <STRIDE_Y> <DATA_POINTER>
<BIAS>                ::= <NUMBER_OF_CHANNELS> <DATA_POINTER>
<ACTIVATION>          ::= <ACTIVATION_TYPE>
<POOLING>             ::= <POOLING_TYPE> <SIZE_X> <SIZE_Y> <PADDING> <STRIDE_X> <STRIDE_Y>
<DENSE>               ::= <INPUT_SIZE> <OUTPUT_SIZE> <DATA_POINTER>
<BATCH_NORMALIZATION> ::= <>
<CONCAT>              ::= 
<SIZES>               ::= <SIZE> <SIZES> | <SIZE>
<SIZE_X>              ::= <SIZE>
<SIZE_Y>              ::= <SIZE>
<STRIDE_X>            ::= <SIZE>
<STRIDE_Y>            ::= <SIZE>
<DATA_POINTER>        ::= <SIZE>
<NUMBER_OF_CHANNELS>  ::= <SIZE>
<ACTIVATION_TYPE>     ::= uint64_t ; Little Endian
```

