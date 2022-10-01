// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERCERTIFICATESRESPONSE_H
#define QTAWS_DESCRIBELISTENERCERTIFICATESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describelistenercertificatesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenerCertificatesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeListenerCertificatesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeListenerCertificatesResponse(const DescribeListenerCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeListenerCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeListenerCertificatesResponse)
    Q_DISABLE_COPY(DescribeListenerCertificatesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
