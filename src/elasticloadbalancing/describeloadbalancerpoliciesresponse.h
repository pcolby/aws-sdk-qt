// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICIESRESPONSE_H
#define QTAWS_DESCRIBELOADBALANCERPOLICIESRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "describeloadbalancerpoliciesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPoliciesResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeLoadBalancerPoliciesResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DescribeLoadBalancerPoliciesResponse(const DescribeLoadBalancerPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoadBalancerPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerPoliciesResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerPoliciesResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
