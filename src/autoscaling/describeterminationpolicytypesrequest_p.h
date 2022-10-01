// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETERMINATIONPOLICYTYPESREQUEST_P_H
#define QTAWS_DESCRIBETERMINATIONPOLICYTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeterminationpolicytypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeTerminationPolicyTypesRequest;

class DescribeTerminationPolicyTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeTerminationPolicyTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeTerminationPolicyTypesRequest * const q);
    DescribeTerminationPolicyTypesRequestPrivate(const DescribeTerminationPolicyTypesRequestPrivate &other,
                                   DescribeTerminationPolicyTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTerminationPolicyTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
