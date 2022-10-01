// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESREQUEST_H
#define QTAWS_DESCRIBERULESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeRulesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeRulesRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeRulesRequest(const DescribeRulesRequest &other);
    DescribeRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
