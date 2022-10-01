// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYGROUPSRESPONSE_P_H
#define QTAWS_SETSECURITYGROUPSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSecurityGroupsResponse;

class SetSecurityGroupsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit SetSecurityGroupsResponsePrivate(SetSecurityGroupsResponse * const q);

    void parseSetSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetSecurityGroupsResponse)
    Q_DISABLE_COPY(SetSecurityGroupsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
