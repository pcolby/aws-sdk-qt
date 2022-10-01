// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBETARGETGROUPATTRIBUTESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describetargetgroupattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupAttributesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeTargetGroupAttributesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeTargetGroupAttributesResponse(const DescribeTargetGroupAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTargetGroupAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetGroupAttributesResponse)
    Q_DISABLE_COPY(DescribeTargetGroupAttributesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
