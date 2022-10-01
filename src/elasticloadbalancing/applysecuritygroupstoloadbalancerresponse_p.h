// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERRESPONSE_P_H
#define QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ApplySecurityGroupsToLoadBalancerResponse;

class ApplySecurityGroupsToLoadBalancerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit ApplySecurityGroupsToLoadBalancerResponsePrivate(ApplySecurityGroupsToLoadBalancerResponse * const q);

    void parseApplySecurityGroupsToLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplySecurityGroupsToLoadBalancerResponse)
    Q_DISABLE_COPY(ApplySecurityGroupsToLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
