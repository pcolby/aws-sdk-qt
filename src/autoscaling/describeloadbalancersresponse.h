// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSRESPONSE_H
#define QTAWS_DESCRIBELOADBALANCERSRESPONSE_H

#include "autoscalingresponse.h"
#include "describeloadbalancersrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancersResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLoadBalancersResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeLoadBalancersResponse(const DescribeLoadBalancersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoadBalancersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeLoadBalancersResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
