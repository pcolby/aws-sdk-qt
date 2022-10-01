// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERTLSCERTIFICATEREQUEST_P_H
#define QTAWS_CREATELOADBALANCERTLSCERTIFICATEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createloadbalancertlscertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class CreateLoadBalancerTlsCertificateRequest;

class CreateLoadBalancerTlsCertificateRequestPrivate : public LightsailRequestPrivate {

public:
    CreateLoadBalancerTlsCertificateRequestPrivate(const LightsailRequest::Action action,
                                   CreateLoadBalancerTlsCertificateRequest * const q);
    CreateLoadBalancerTlsCertificateRequestPrivate(const CreateLoadBalancerTlsCertificateRequestPrivate &other,
                                   CreateLoadBalancerTlsCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerTlsCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
