// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESOFLISTENERRESPONSE_H
#define QTAWS_SETLOADBALANCERPOLICIESOFLISTENERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "setloadbalancerpoliciesoflistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesOfListenerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT SetLoadBalancerPoliciesOfListenerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    SetLoadBalancerPoliciesOfListenerResponse(const SetLoadBalancerPoliciesOfListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLoadBalancerPoliciesOfListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBalancerPoliciesOfListenerResponse)
    Q_DISABLE_COPY(SetLoadBalancerPoliciesOfListenerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
