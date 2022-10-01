// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeLoadBalancersRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeLoadBalancersRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeLoadBalancersRequest(const DescribeLoadBalancersRequest &other);
    DescribeLoadBalancersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancersRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
