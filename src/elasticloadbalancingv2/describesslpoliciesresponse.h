// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESSLPOLICIESRESPONSE_H
#define QTAWS_DESCRIBESSLPOLICIESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describesslpoliciesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeSSLPoliciesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeSSLPoliciesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeSSLPoliciesResponse(const DescribeSSLPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSSLPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSSLPoliciesResponse)
    Q_DISABLE_COPY(DescribeSSLPoliciesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
