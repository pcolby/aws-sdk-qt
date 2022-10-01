// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICIESREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERPOLICIESREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPoliciesRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeLoadBalancerPoliciesRequest : public ElasticLoadBalancingRequest {

public:
    DescribeLoadBalancerPoliciesRequest(const DescribeLoadBalancerPoliciesRequest &other);
    DescribeLoadBalancerPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerPoliciesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
