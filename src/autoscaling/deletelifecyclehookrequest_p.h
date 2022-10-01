// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEHOOKREQUEST_P_H
#define QTAWS_DELETELIFECYCLEHOOKREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deletelifecyclehookrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteLifecycleHookRequest;

class DeleteLifecycleHookRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeleteLifecycleHookRequestPrivate(const AutoScalingRequest::Action action,
                                   DeleteLifecycleHookRequest * const q);
    DeleteLifecycleHookRequestPrivate(const DeleteLifecycleHookRequestPrivate &other,
                                   DeleteLifecycleHookRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLifecycleHookRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
