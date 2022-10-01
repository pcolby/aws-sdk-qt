// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESOFLISTENERRESPONSE_P_H
#define QTAWS_SETLOADBALANCERPOLICIESOFLISTENERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesOfListenerResponse;

class SetLoadBalancerPoliciesOfListenerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit SetLoadBalancerPoliciesOfListenerResponsePrivate(SetLoadBalancerPoliciesOfListenerResponse * const q);

    void parseSetLoadBalancerPoliciesOfListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetLoadBalancerPoliciesOfListenerResponse)
    Q_DISABLE_COPY(SetLoadBalancerPoliciesOfListenerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
