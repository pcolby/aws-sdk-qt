// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerAttributesRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeLoadBalancerAttributesRequest : public ElasticLoadBalancingRequest {

public:
    DescribeLoadBalancerAttributesRequest(const DescribeLoadBalancerAttributesRequest &other);
    DescribeLoadBalancerAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
