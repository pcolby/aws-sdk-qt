// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGACTIVITIESREQUEST_P_H
#define QTAWS_DESCRIBESCALINGACTIVITIESREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "describescalingactivitiesrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalingActivitiesRequest;

class DescribeScalingActivitiesRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    DescribeScalingActivitiesRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   DescribeScalingActivitiesRequest * const q);
    DescribeScalingActivitiesRequestPrivate(const DescribeScalingActivitiesRequestPrivate &other,
                                   DescribeScalingActivitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalingActivitiesRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
