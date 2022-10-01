// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBESCALINGPOLICIESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describescalingpoliciesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeScalingPoliciesRequest;

class DescribeScalingPoliciesRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeScalingPoliciesRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeScalingPoliciesRequest * const q);
    DescribeScalingPoliciesRequestPrivate(const DescribeScalingPoliciesRequestPrivate &other,
                                   DescribeScalingPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalingPoliciesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
