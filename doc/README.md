Arcadia Core
=============

Setup
---------------------
Arcadia Core is the original Arcadia client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Arcadia transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Arcadia Core, visit [arcadiablock.com](https://arcadiablock.com/en/download/).

Running
---------------------
The following are some helpful notes on how to run Arcadia Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/arcadia-qt` (GUI) or
- `bin/arcadiad` (headless)

### Windows

Unpack the files into a directory, and then run arcadia-qt.exe.

### macOS

Drag Arcadia Core to your applications folder, and then run Arcadia Core.

### Need Help?

* See the documentation at the [Arcadia Wiki](https://en.arcadia.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#arcadia](https://webchat.freenode.net/#arcadia) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#arcadia).
* Ask for help on the [ArcadiaTalk](https://arcadiatalk.org/) forums, in the [Technical Support board](https://arcadiatalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Arcadia Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/arcadia-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Arcadia repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.arcadiablock.com/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [ArcadiaTalk](https://arcadiatalk.org/) forums, in the [Development & Technical Discussion board](https://arcadiatalk.org/index.php?board=6.0).
* Discuss project-specific development on #arcadia-core-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#arcadia-core-dev).
* Discuss general Arcadia development on #arcadia-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#arcadia-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [arcadia.conf Configuration File](arcadia-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
