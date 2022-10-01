// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANRESOURCESREQUEST_P_H
#define QTAWS_DESCRIBESCALINGPLANRESOURCESREQUEST_P_H

#include "autoscalingplansrequest_p.h"
#include "describescalingplanresourcesrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlanResourcesRequest;

class DescribeScalingPlanResourcesRequestPrivate : public AutoScalingPlansRequestPrivate {

public:
    DescribeScalingPlanResourcesRequestPrivate(const AutoScalingPlansRequest::Action action,
                                   DescribeScalingPlanResourcesRequest * const q);
    DescribeScalingPlanResourcesRequestPrivate(const DescribeScalingPlanResourcesRequestPrivate &other,
                                   DescribeScalingPlanResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalingPlanResourcesRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
