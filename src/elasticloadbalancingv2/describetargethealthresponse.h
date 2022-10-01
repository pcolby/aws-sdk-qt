// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETHEALTHRESPONSE_H
#define QTAWS_DESCRIBETARGETHEALTHRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describetargethealthrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetHealthResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeTargetHealthResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeTargetHealthResponse(const DescribeTargetHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTargetHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetHealthResponse)
    Q_DISABLE_COPY(DescribeTargetHealthResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
