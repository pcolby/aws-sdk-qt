// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeAccountLimitsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeAccountLimitsRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeAccountLimitsRequest(const DescribeAccountLimitsRequest &other);
    DescribeAccountLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountLimitsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
