// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOADBALANCERATTRIBUTERESPONSE_P_H
#define QTAWS_UPDATELOADBALANCERATTRIBUTERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateLoadBalancerAttributeResponse;

class UpdateLoadBalancerAttributeResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateLoadBalancerAttributeResponsePrivate(UpdateLoadBalancerAttributeResponse * const q);

    void parseUpdateLoadBalancerAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLoadBalancerAttributeResponse)
    Q_DISABLE_COPY(UpdateLoadBalancerAttributeResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
