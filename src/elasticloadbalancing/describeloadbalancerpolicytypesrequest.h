// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICYTYPESREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERPOLICYTYPESREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPolicyTypesRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeLoadBalancerPolicyTypesRequest : public ElasticLoadBalancingRequest {

public:
    DescribeLoadBalancerPolicyTypesRequest(const DescribeLoadBalancerPolicyTypesRequest &other);
    DescribeLoadBalancerPolicyTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerPolicyTypesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
