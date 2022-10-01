// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPSREQUEST_H
#define QTAWS_DESCRIBETARGETGROUPSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeTargetGroupsRequest : public ElasticLoadBalancingv2Request {

public:
    DescribeTargetGroupsRequest(const DescribeTargetGroupsRequest &other);
    DescribeTargetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetGroupsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
