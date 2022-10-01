// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESFROMLOADBALANCERRESPONSE_P_H
#define QTAWS_DETACHINSTANCESFROMLOADBALANCERRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DetachInstancesFromLoadBalancerResponse;

class DetachInstancesFromLoadBalancerResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DetachInstancesFromLoadBalancerResponsePrivate(DetachInstancesFromLoadBalancerResponse * const q);

    void parseDetachInstancesFromLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachInstancesFromLoadBalancerResponse)
    Q_DISABLE_COPY(DetachInstancesFromLoadBalancerResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
