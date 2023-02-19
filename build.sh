#!/bin/bash
cd sample
./swift_src/main.h ./swift_src/main.swift
	cargo build -p sample
	swiftc -L ./target/debug \
	-lsample \
	-import-objc-header ./swift_src/main.h \
	./swift_src/main.swift
