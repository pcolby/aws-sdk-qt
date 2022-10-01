// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICLOADBALANCERSRESPONSE_P_H
#define QTAWS_DESCRIBEELASTICLOADBALANCERSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticLoadBalancersResponse;

class DescribeElasticLoadBalancersResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeElasticLoadBalancersResponsePrivate(DescribeElasticLoadBalancersResponse * const q);

    void parseDescribeElasticLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeElasticLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeElasticLoadBalancersResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
