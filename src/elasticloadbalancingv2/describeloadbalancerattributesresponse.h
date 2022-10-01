// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBELOADBALANCERATTRIBUTESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describeloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeLoadBalancerAttributesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeLoadBalancerAttributesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeLoadBalancerAttributesResponse(const DescribeLoadBalancerAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoadBalancerAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerAttributesResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerAttributesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
