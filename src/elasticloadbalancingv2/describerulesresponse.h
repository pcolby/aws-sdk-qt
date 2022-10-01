// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESRESPONSE_H
#define QTAWS_DESCRIBERULESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describerulesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeRulesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeRulesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeRulesResponse(const DescribeRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesResponse)
    Q_DISABLE_COPY(DescribeRulesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
