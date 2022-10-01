// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETSRESPONSE_P_H
#define QTAWS_DEREGISTERTARGETSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeregisterTargetsResponse;

class DeregisterTargetsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DeregisterTargetsResponsePrivate(DeregisterTargetsResponse * const q);

    void parseDeregisterTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTargetsResponse)
    Q_DISABLE_COPY(DeregisterTargetsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
