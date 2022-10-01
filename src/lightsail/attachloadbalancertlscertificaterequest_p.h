// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTLSCERTIFICATEREQUEST_P_H
#define QTAWS_ATTACHLOADBALANCERTLSCERTIFICATEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "attachloadbalancertlscertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class AttachLoadBalancerTlsCertificateRequest;

class AttachLoadBalancerTlsCertificateRequestPrivate : public LightsailRequestPrivate {

public:
    AttachLoadBalancerTlsCertificateRequestPrivate(const LightsailRequest::Action action,
                                   AttachLoadBalancerTlsCertificateRequest * const q);
    AttachLoadBalancerTlsCertificateRequestPrivate(const AttachLoadBalancerTlsCertificateRequestPrivate &other,
                                   AttachLoadBalancerTlsCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancerTlsCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
