// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSRESPONSE_H
#define QTAWS_DESCRIBELOADBALANCERSRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "describeloadbalancersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancersResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeLoadBalancersResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DescribeLoadBalancersResponse(const DescribeLoadBalancersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoadBalancersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeLoadBalancersResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
