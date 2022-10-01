// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELIFECYCLEACTIONREQUEST_P_H
#define QTAWS_COMPLETELIFECYCLEACTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "completelifecycleactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class CompleteLifecycleActionRequest;

class CompleteLifecycleActionRequestPrivate : public AutoScalingRequestPrivate {

public:
    CompleteLifecycleActionRequestPrivate(const AutoScalingRequest::Action action,
                                   CompleteLifecycleActionRequest * const q);
    CompleteLifecycleActionRequestPrivate(const CompleteLifecycleActionRequestPrivate &other,
                                   CompleteLifecycleActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteLifecycleActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
