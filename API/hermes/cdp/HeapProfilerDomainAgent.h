/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef HERMES_CDP_HEAPPROFILERDOMAINAGENT_H
#define HERMES_CDP_HEAPPROFILERDOMAINAGENT_H

#include "DomainAgent.h"

namespace facebook {
namespace hermes {
namespace cdp {

/// Handler for the "HeapProfiler" domain of CDP. All methods expect to be
/// invoked with exclusive access to the runtime.
class HeapProfilerDomainAgent : public DomainAgent {
 public:
  HeapProfilerDomainAgent(
      int32_t executionContextID,
      SynchronizedOutboundCallback messageCallback,
      std::shared_ptr<RemoteObjectsTable> objTable);
  ~HeapProfilerDomainAgent() = default;
};

} // namespace cdp
} // namespace hermes
} // namespace facebook

#endif // HERMES_CDP_HEAPPROFILERDOMAINAGENT_H