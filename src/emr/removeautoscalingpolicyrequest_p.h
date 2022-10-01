// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOSCALINGPOLICYREQUEST_P_H
#define QTAWS_REMOVEAUTOSCALINGPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "removeautoscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class RemoveAutoScalingPolicyRequest;

class RemoveAutoScalingPolicyRequestPrivate : public EmrRequestPrivate {

public:
    RemoveAutoScalingPolicyRequestPrivate(const EmrRequest::Action action,
                                   RemoveAutoScalingPolicyRequest * const q);
    RemoveAutoScalingPolicyRequestPrivate(const RemoveAutoScalingPolicyRequestPrivate &other,
                                   RemoveAutoScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveAutoScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
