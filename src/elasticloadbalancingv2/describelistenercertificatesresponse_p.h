// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERCERTIFICATESRESPONSE_P_H
#define QTAWS_DESCRIBELISTENERCERTIFICATESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenerCertificatesResponse;

class DescribeListenerCertificatesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeListenerCertificatesResponsePrivate(DescribeListenerCertificatesResponse * const q);

    void parseDescribeListenerCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeListenerCertificatesResponse)
    Q_DISABLE_COPY(DescribeListenerCertificatesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
