// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeLoadBalancerAttributesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeLoadBalancerAttributesRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeLoadBalancerAttributesRequest(const DescribeLoadBalancerAttributesRequest &other);
    DescribeLoadBalancerAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
