// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_P_H
#define QTAWS_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "recordlifecycleactionheartbeatrequest.h"

namespace QtAws {
namespace AutoScaling {

class RecordLifecycleActionHeartbeatRequest;

class RecordLifecycleActionHeartbeatRequestPrivate : public AutoScalingRequestPrivate {

public:
    RecordLifecycleActionHeartbeatRequestPrivate(const AutoScalingRequest::Action action,
                                   RecordLifecycleActionHeartbeatRequest * const q);
    RecordLifecycleActionHeartbeatRequestPrivate(const RecordLifecycleActionHeartbeatRequestPrivate &other,
                                   RecordLifecycleActionHeartbeatRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecordLifecycleActionHeartbeatRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
