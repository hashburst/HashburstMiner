# HashburstMiner

[![Github All Releases](https://img.shields.io/github/downloads/HashburstMiner/HashburstMiner/total.svg)](https://github.com/hashburst/HashburstMiner/HashburstMiner/releases)
[![GitHub release](https://img.shields.io/github/release/HashburstMiner/HashburstMiner/all.svg)](https://github.com/hashburst/HashburstMiner/HashburstMiner/releases)
[![GitHub Release Date](https://img.shields.io/github/release-date/HashburstMiner/HashburstMiner.svg)](https://github.com/hashburst/HashburstMiner/HashburstMiner/releases)
[![GitHub license](https://img.shields.io/github/license/HashburstMiner/HashburstMiner.svg)](https://github.com/hashburst/HashburstMiner/HashburstMiner/blob/master/LICENSE)
[![GitHub stars](https://img.shields.io/github/stars/HashburstMiner/HashburstMiner.svg)](https://github.com/hashburst/HashburstMiner/HashburstMiner/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/HashburstMiner/HashburstMiner.svg)](https://github.com/hashburst/HashburstMiner/HashburstMiner/network)

HashburstMiner is a high performance, open source, cross platform RandomX, KawPow, CryptoNight and [GhostRider](https://github.com/hashburst/HashburstMiner/HashburstMiner/tree/master/src/crypto/ghostrider#readme) unified CPU/GPU miner and [RandomX benchmark](https://HashburstMiner.com/benchmark). Official binaries are available for Windows, Linux, macOS and FreeBSD.

## Mining backends
- **CPU** (x86/x64/ARMv7/ARMv8)
- **OpenCL** for AMD GPUs.
- **CUDA** for NVIDIA GPUs via external [CUDA plugin](https://github.com/hashburst/HashburstMiner/HashburstMiner-cuda).

## Download
* **[Binary releases](https://github.com/hashburst/HashburstMiner/HashburstMiner/releases)**
* **[Build from source](https://HashburstMiner.com/docs/miner/build)**

## Usage
The preferred way to configure the miner is the [JSON config file](https://HashburstMiner.com/docs/miner/config) as it is more flexible and human friendly. The [command line interface](https://HashburstMiner.com/docs/miner/command-line-options) does not cover all features, such as mining profiles for different algorithms. Important options can be changed during runtime without miner restart by editing the config file or executing [API](https://HashburstMiner.com/docs/miner/api) calls.

* **[Wizard](https://HashburstMiner.com/wizard)** helps you create initial configuration for the miner.
* **[Workers](http://workers.HashburstMiner.info)** helps manage your miners via HTTP API.

## Donations
* Default donation 1% (1 minute in 100 minutes) can be increased via option `donate-level` or disabled in source code.
* XMR: `48edfHu7V9Z84YzzMa6fUueoELZ9ZRXq9VetWzYGzKt52XU5xvqgzYnDK9URnRoJMk1j8nLwEVsaSWJ4fhdUyZijBGUicoD`

## Developers
* **[HashburstMiner](https://github.com/hashburst/HashburstMiner)**
* **[sech1](https://github.com/SChernykh)**

## Contacts
* support@HashburstMiner.com
* [reddit](https://www.reddit.com/user/HashburstMiner/)
* [twitter](https://twitter.com/HashburstMiner_dev)
