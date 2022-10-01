// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERSRESPONSE_P_H
#define QTAWS_DESCRIBELISTENERSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenersResponse;

class DescribeListenersResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeListenersResponsePrivate(DescribeListenersResponse * const q);

    void parseDescribeListenersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeListenersResponse)
    Q_DISABLE_COPY(DescribeListenersResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
