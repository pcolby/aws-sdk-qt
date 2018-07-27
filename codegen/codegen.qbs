import qbs

Application {
  name: "codegen"
  files: "main.cpp"
  Depends { name: "cpp" }
}
