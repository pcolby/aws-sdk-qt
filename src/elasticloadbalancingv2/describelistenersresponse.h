// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERSRESPONSE_H
#define QTAWS_DESCRIBELISTENERSRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describelistenersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenersResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeListenersResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeListenersResponse(const DescribeListenersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeListenersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeListenersResponse)
    Q_DISABLE_COPY(DescribeListenersResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
