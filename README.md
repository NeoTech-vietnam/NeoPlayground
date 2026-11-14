# NeoPlayground
Independent coding exercises, experiments, and runnable examples for ESP32, STM32, desktop platforms, languages, and algorithms. Examples document their environment, execution steps, and expected results.

## Submodules

This repository includes [NeoCode](https://github.com/NeoTech-vietnam/NeoCode) as the `NeoCode` submodule. Access to the repository via GitHub SSH is required.

Clone this repository and initialize its submodules in one step:

```bash
git clone --recurse-submodules git@github.com:NeoTech-vietnam/NeoPlayground.git
```

If you already cloned the repository, initialize and fetch the submodules with:

```bash
git submodule update --init --recursive
```

After pulling changes, run the same command to check out the submodule revisions recorded by the parent repository:

```bash
git pull
git submodule update --init --recursive
```
