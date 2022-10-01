// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERTLSCERTIFICATEREQUEST_P_H
#define QTAWS_DELETELOADBALANCERTLSCERTIFICATEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deleteloadbalancertlscertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteLoadBalancerTlsCertificateRequest;

class DeleteLoadBalancerTlsCertificateRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteLoadBalancerTlsCertificateRequestPrivate(const LightsailRequest::Action action,
                                   DeleteLoadBalancerTlsCertificateRequest * const q);
    DeleteLoadBalancerTlsCertificateRequestPrivate(const DeleteLoadBalancerTlsCertificateRequestPrivate &other,
                                   DeleteLoadBalancerTlsCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerTlsCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
