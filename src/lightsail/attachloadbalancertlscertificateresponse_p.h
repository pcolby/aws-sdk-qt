// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTLSCERTIFICATERESPONSE_P_H
#define QTAWS_ATTACHLOADBALANCERTLSCERTIFICATERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class AttachLoadBalancerTlsCertificateResponse;

class AttachLoadBalancerTlsCertificateResponsePrivate : public LightsailResponsePrivate {

public:

    explicit AttachLoadBalancerTlsCertificateResponsePrivate(AttachLoadBalancerTlsCertificateResponse * const q);

    void parseAttachLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancerTlsCertificateResponse)
    Q_DISABLE_COPY(AttachLoadBalancerTlsCertificateResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
