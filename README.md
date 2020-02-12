# psychic-garbanzo
[![Build Status](https://travis-ci.com/SweeXordious/psychic-garbanzo.svg?token=z2HQYuqNJFYxRTjxCmyT&branch=master)](https://travis-ci.com/SweeXordious/psychic-garbanzo) [![codecov](https://codecov.io/gh/SweeXordious/psychic-garbanzo/branch/master/graph/badge.svg?token=9ydUg96zDn)](https://codecov.io/gh/SweeXordious/psychic-garbanzo)


# Commands

`sudo apt-get install libgmp3-dev`

### Build 
`git clone https://github.com/SweeXordious/psychic-garbanzo`

`mkdir build`

`cd build`

`cmake ..`

`make`

`./psychic-garbanzo`

#### Build tests
`git clone https://github.com/SweeXordious/psychic-garbanzo`

`mkdir build`

`cd build`

`cmake  -DCMAKE_BUILD_TYPE=Coverage -DBUILD_TESTS=ON ..`

`make psychic-test`

`./psychic-test`

# Progress

Components:
- Hash function: sha256 => done
- Scripting language: 
    - still requires tests
    - still the formats of pubkeys and hashes need to be dealt with
- Underlying network
    - rpc
    - p2p
    - discovery
- Blocks
    - Definition
        - Header: Done
    - validation
    - broadcast
- Transaction definition
    - addresses
    - currency
    - format: json
- Merkle tree: Done
- Proof of work
- Storage
    - serialization
    - think of a db ? or just files
- ui ?
- different bases

Problems:
- When passing public keys or idk to sha256 or ripemd160, it gives wrong results from time to time. That is due to the 
fact that data is passed as ascii, hex, binary or whatever and that causes confusion.. 
