// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCALINGPOLICYREQUEST_P_H
#define QTAWS_PUTSCALINGPOLICYREQUEST_P_H

#include "gameliftrequest_p.h"
#include "putscalingpolicyrequest.h"

namespace QtAws {
namespace GameLift {

class PutScalingPolicyRequest;

class PutScalingPolicyRequestPrivate : public GameLiftRequestPrivate {

public:
    PutScalingPolicyRequestPrivate(const GameLiftRequest::Action action,
                                   PutScalingPolicyRequest * const q);
    PutScalingPolicyRequestPrivate(const PutScalingPolicyRequestPrivate &other,
                                   PutScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutScalingPolicyRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
