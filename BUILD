load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "funcs",
    srcs = ["funcs.c"],
    hdrs = ["funcs.h"],
)

cc_binary(
    name = "inctest",
    srcs = ["main.c"],
    deps = [
        ":funcs",
    ],
)
