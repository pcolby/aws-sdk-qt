// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESSLPOLICIESREQUEST_H
#define QTAWS_DESCRIBESSLPOLICIESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeSSLPoliciesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeSSLPoliciesRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeSSLPoliciesRequest(const DescribeSSLPoliciesRequest &other);
    DescribeSSLPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSSLPoliciesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
