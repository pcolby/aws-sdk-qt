// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEHOOKREQUEST_P_H
#define QTAWS_PUTLIFECYCLEHOOKREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "putlifecyclehookrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutLifecycleHookRequest;

class PutLifecycleHookRequestPrivate : public AutoScalingRequestPrivate {

public:
    PutLifecycleHookRequestPrivate(const AutoScalingRequest::Action action,
                                   PutLifecycleHookRequest * const q);
    PutLifecycleHookRequestPrivate(const PutLifecycleHookRequestPrivate &other,
                                   PutLifecycleHookRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLifecycleHookRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
