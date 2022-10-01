// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERTLSCERTIFICATESREQUEST_P_H
#define QTAWS_GETLOADBALANCERTLSCERTIFICATESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getloadbalancertlscertificatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerTlsCertificatesRequest;

class GetLoadBalancerTlsCertificatesRequestPrivate : public LightsailRequestPrivate {

public:
    GetLoadBalancerTlsCertificatesRequestPrivate(const LightsailRequest::Action action,
                                   GetLoadBalancerTlsCertificatesRequest * const q);
    GetLoadBalancerTlsCertificatesRequestPrivate(const GetLoadBalancerTlsCertificatesRequestPrivate &other,
                                   GetLoadBalancerTlsCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancerTlsCertificatesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
