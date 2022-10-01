// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERRESPONSE_H
#define QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "setloadbalancerpoliciesforbackendserverrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesForBackendServerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT SetLoadBalancerPoliciesForBackendServerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    SetLoadBalancerPoliciesForBackendServerResponse(const SetLoadBalancerPoliciesForBackendServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLoadBalancerPoliciesForBackendServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBalancerPoliciesForBackendServerResponse)
    Q_DISABLE_COPY(SetLoadBalancerPoliciesForBackendServerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
