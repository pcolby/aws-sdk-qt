// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATEREQUEST_H
#define QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATEREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerListenerSSLCertificateRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT SetLoadBalancerListenerSSLCertificateRequest : public ElasticLoadBalancingRequest {

public:
    SetLoadBalancerListenerSSLCertificateRequest(const SetLoadBalancerListenerSSLCertificateRequest &other);
    SetLoadBalancerListenerSSLCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBalancerListenerSSLCertificateRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
