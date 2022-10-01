// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERRESPONSE_H
#define QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "applysecuritygroupstoloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ApplySecurityGroupsToLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ApplySecurityGroupsToLoadBalancerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    ApplySecurityGroupsToLoadBalancerResponse(const ApplySecurityGroupsToLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApplySecurityGroupsToLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplySecurityGroupsToLoadBalancerResponse)
    Q_DISABLE_COPY(ApplySecurityGroupsToLoadBalancerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
