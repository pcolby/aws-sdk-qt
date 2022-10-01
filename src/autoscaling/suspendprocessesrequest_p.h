// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDPROCESSESREQUEST_P_H
#define QTAWS_SUSPENDPROCESSESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "suspendprocessesrequest.h"

namespace QtAws {
namespace AutoScaling {

class SuspendProcessesRequest;

class SuspendProcessesRequestPrivate : public AutoScalingRequestPrivate {

public:
    SuspendProcessesRequestPrivate(const AutoScalingRequest::Action action,
                                   SuspendProcessesRequest * const q);
    SuspendProcessesRequestPrivate(const SuspendProcessesRequestPrivate &other,
                                   SuspendProcessesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SuspendProcessesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
