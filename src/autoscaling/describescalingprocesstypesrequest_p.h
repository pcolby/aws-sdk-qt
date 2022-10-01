// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPROCESSTYPESREQUEST_P_H
#define QTAWS_DESCRIBESCALINGPROCESSTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describescalingprocesstypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScalingProcessTypesRequest;

class DescribeScalingProcessTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeScalingProcessTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeScalingProcessTypesRequest * const q);
    DescribeScalingProcessTypesRequestPrivate(const DescribeScalingProcessTypesRequestPrivate &other,
                                   DescribeScalingProcessTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalingProcessTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
