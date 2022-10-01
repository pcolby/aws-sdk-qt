// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATEREQUEST_P_H
#define QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATEREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "setloadbalancerlistenersslcertificaterequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerListenerSSLCertificateRequest;

class SetLoadBalancerListenerSSLCertificateRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    SetLoadBalancerListenerSSLCertificateRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   SetLoadBalancerListenerSSLCertificateRequest * const q);
    SetLoadBalancerListenerSSLCertificateRequestPrivate(const SetLoadBalancerListenerSSLCertificateRequestPrivate &other,
                                   SetLoadBalancerListenerSSLCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetLoadBalancerListenerSSLCertificateRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
