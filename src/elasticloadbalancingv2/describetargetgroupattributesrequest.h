// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBETARGETGROUPATTRIBUTESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupAttributesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeTargetGroupAttributesRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeTargetGroupAttributesRequest(const DescribeTargetGroupAttributesRequest &other);
    DescribeTargetGroupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetGroupAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
