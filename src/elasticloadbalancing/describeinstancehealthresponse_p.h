// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEHEALTHRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeInstanceHealthResponse;

class DescribeInstanceHealthResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DescribeInstanceHealthResponsePrivate(DescribeInstanceHealthResponse * const q);

    void parseDescribeInstanceHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceHealthResponse)
    Q_DISABLE_COPY(DescribeInstanceHealthResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
