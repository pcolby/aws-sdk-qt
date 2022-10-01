// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERTLSCERTIFICATERESPONSE_P_H
#define QTAWS_CREATELOADBALANCERTLSCERTIFICATERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateLoadBalancerTlsCertificateResponse;

class CreateLoadBalancerTlsCertificateResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateLoadBalancerTlsCertificateResponsePrivate(CreateLoadBalancerTlsCertificateResponse * const q);

    void parseCreateLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerTlsCertificateResponse)
    Q_DISABLE_COPY(CreateLoadBalancerTlsCertificateResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
