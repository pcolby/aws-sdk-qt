// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERTLSCERTIFICATERESPONSE_P_H
#define QTAWS_DELETELOADBALANCERTLSCERTIFICATERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteLoadBalancerTlsCertificateResponse;

class DeleteLoadBalancerTlsCertificateResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteLoadBalancerTlsCertificateResponsePrivate(DeleteLoadBalancerTlsCertificateResponse * const q);

    void parseDeleteLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerTlsCertificateResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerTlsCertificateResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
