// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPOLICYREQUEST_P_H
#define QTAWS_DELETESCALINGPOLICYREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "deletescalingpolicyrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeleteScalingPolicyRequest;

class DeleteScalingPolicyRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    DeleteScalingPolicyRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   DeleteScalingPolicyRequest * const q);
    DeleteScalingPolicyRequestPrivate(const DeleteScalingPolicyRequestPrivate &other,
                                   DeleteScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPolicyRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
