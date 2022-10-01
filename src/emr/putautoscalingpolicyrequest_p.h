// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOSCALINGPOLICYREQUEST_P_H
#define QTAWS_PUTAUTOSCALINGPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "putautoscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class PutAutoScalingPolicyRequest;

class PutAutoScalingPolicyRequestPrivate : public EmrRequestPrivate {

public:
    PutAutoScalingPolicyRequestPrivate(const EmrRequest::Action action,
                                   PutAutoScalingPolicyRequest * const q);
    PutAutoScalingPolicyRequestPrivate(const PutAutoScalingPolicyRequestPrivate &other,
                                   PutAutoScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAutoScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
