// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancersRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLoadBalancersRequest : public AutoScalingRequest {

public:
    DescribeLoadBalancersRequest(const DescribeLoadBalancersRequest &other);
    DescribeLoadBalancersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancersRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
