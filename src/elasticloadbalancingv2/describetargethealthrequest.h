// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETHEALTHREQUEST_H
#define QTAWS_DESCRIBETARGETHEALTHREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetHealthRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeTargetHealthRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeTargetHealthRequest(const DescribeTargetHealthRequest &other);
    DescribeTargetHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetHealthRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
