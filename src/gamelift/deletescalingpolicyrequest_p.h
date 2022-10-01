// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPOLICYREQUEST_P_H
#define QTAWS_DELETESCALINGPOLICYREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletescalingpolicyrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteScalingPolicyRequest;

class DeleteScalingPolicyRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteScalingPolicyRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteScalingPolicyRequest * const q);
    DeleteScalingPolicyRequestPrivate(const DeleteScalingPolicyRequestPrivate &other,
                                   DeleteScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPolicyRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
