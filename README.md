# Iridium Menu

![GitHub Build Status](https://img.shields.io/github/actions/workflow/status/Ayydxn/IridiumMenu/multi-platform.yml)
![GitHub License](https://img.shields.io/github/license/Ayydxn/IridiumMenu)
![GitHub Issues](https://img.shields.io/github/issues/Ayydxn/IridiumMenu)
![GitHub Pull Requests](https://img.shields.io/github/issues-pr/Ayydxn/IridiumMenu)

---

Iridium Menu is a mod menu for Geometry Dash, built on the [Geode](https://geode-sdk.org) mod loader. It aims to offer a broad set of hacks and utilities seen in other mod menus like Mega Hack, stay up to date with Geometry Dash and Geode releases, and keep its codebase modular so new features are easy to add. Currently, it only supports Windows.

⚠️ Iridium Menu is in early development and stability is absolutely **not guaranteed**.

---

## 📝 Reporting Issues

You can report any bugs or issues you come across using the [issue tracker](https://github.com/Ayydxn/REPO_NAME/issues). Before opening a new issue, please use the search tool to make sure your issue hasn't already been reported. Issues that are duplicates of one another or don't contain the necessary information needed to debug them may be closed. When reporting a bug, please include your Geometry Dash and Geode versions and, if applicable, your Geode log or crash log.

Please note that the issue tracker is also open to feature requests.

---

## 🛠️ Building From Sources

Just like any other Geode mode, it's built with CMake and the Geode SDK. Refer to the [Geode documentation](https://docs.geode-sdk.org/getting-started/prerequisites) on installing everything you'll need like Geode, the Geode SDK, Ninja and Clang.

MacOS, Android and iOS are not officially supported yet. The mod may build on those platforms, but I can't guarantee that anything will work properly.

### 🔨 Building:
```bash
git clone https://github.com/Ayydxn/IridiumMenu.git
cd "IridiumMenu"
geode build
```

The build produces a `.geode` package in the `geode/mods` directory of the Geometry Dash instance that your current Geode profile is pointing to.

---

## 📃 License

Iridium Menu is licensed under the free and open-source license, GNU LGPLv3. For more information, please read the [license](https://choosealicense.com/licenses/lgpl-3.0/).
