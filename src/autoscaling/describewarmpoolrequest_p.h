// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWARMPOOLREQUEST_P_H
#define QTAWS_DESCRIBEWARMPOOLREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describewarmpoolrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeWarmPoolRequest;

class DescribeWarmPoolRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeWarmPoolRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeWarmPoolRequest * const q);
    DescribeWarmPoolRequestPrivate(const DescribeWarmPoolRequestPrivate &other,
                                   DescribeWarmPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWarmPoolRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
