// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATERESPONSE_P_H
#define QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATERESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerListenerSSLCertificateResponse;

class SetLoadBalancerListenerSSLCertificateResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit SetLoadBalancerListenerSSLCertificateResponsePrivate(SetLoadBalancerListenerSSLCertificateResponse * const q);

    void parseSetLoadBalancerListenerSSLCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetLoadBalancerListenerSSLCertificateResponse)
    Q_DISABLE_COPY(SetLoadBalancerListenerSSLCertificateResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
