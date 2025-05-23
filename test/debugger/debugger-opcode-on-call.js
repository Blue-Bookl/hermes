/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

// RUN: %hdb %s < %s.debug | %FileCheckOrRegen --match-full-lines %s
// REQUIRES: debugger

function fn() {
  print('fn');
}

function test() {
  fn();
}

debugger;
test();

// Auto-generated content below. Please do not modify manually.

// CHECK:Break on 'debugger' statement in global: {{.*}}debugger-opcode-on-call.js[2]:19:1
// CHECK-NEXT:Set breakpoint 1 at {{.*}}debugger-opcode-on-call.js[2]:16:5
// CHECK-NEXT:Continuing execution
// CHECK-NEXT:Break on breakpoint 1 in test: {{.*}}debugger-opcode-on-call.js[2]:16:5
// CHECK-NEXT:Continuing execution
// CHECK-NEXT:fn
