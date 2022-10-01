// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERRESPONSE_P_H
#define QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesForBackendServerResponse;

class SetLoadBalancerPoliciesForBackendServerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit SetLoadBalancerPoliciesForBackendServerResponsePrivate(SetLoadBalancerPoliciesForBackendServerResponse * const q);

    void parseSetLoadBalancerPoliciesForBackendServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetLoadBalancerPoliciesForBackendServerResponse)
    Q_DISABLE_COPY(SetLoadBalancerPoliciesForBackendServerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
