// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTLSCERTIFICATEREQUEST_H
#define QTAWS_ATTACHLOADBALANCERTLSCERTIFICATEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachLoadBalancerTlsCertificateRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT AttachLoadBalancerTlsCertificateRequest : public LightsailRequest {

public:
    AttachLoadBalancerTlsCertificateRequest(const AttachLoadBalancerTlsCertificateRequest &other);
    AttachLoadBalancerTlsCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancerTlsCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
