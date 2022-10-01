// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICCOLLECTIONTYPESREQUEST_P_H
#define QTAWS_DESCRIBEMETRICCOLLECTIONTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describemetriccollectiontypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeMetricCollectionTypesRequest;

class DescribeMetricCollectionTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeMetricCollectionTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeMetricCollectionTypesRequest * const q);
    DescribeMetricCollectionTypesRequestPrivate(const DescribeMetricCollectionTypesRequestPrivate &other,
                                   DescribeMetricCollectionTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMetricCollectionTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
