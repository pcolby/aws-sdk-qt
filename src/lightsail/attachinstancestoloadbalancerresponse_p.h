// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESTOLOADBALANCERRESPONSE_P_H
#define QTAWS_ATTACHINSTANCESTOLOADBALANCERRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class AttachInstancesToLoadBalancerResponse;

class AttachInstancesToLoadBalancerResponsePrivate : public LightsailResponsePrivate {

public:

    explicit AttachInstancesToLoadBalancerResponsePrivate(AttachInstancesToLoadBalancerResponse * const q);

    void parseAttachInstancesToLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachInstancesToLoadBalancerResponse)
    Q_DISABLE_COPY(AttachInstancesToLoadBalancerResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
