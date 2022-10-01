// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYGROUPSRESPONSE_H
#define QTAWS_SETSECURITYGROUPSRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "setsecuritygroupsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSecurityGroupsResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT SetSecurityGroupsResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    SetSecurityGroupsResponse(const SetSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSecurityGroupsResponse)
    Q_DISABLE_COPY(SetSecurityGroupsResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
