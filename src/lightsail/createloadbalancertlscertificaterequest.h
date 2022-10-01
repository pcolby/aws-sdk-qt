// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERTLSCERTIFICATEREQUEST_H
#define QTAWS_CREATELOADBALANCERTLSCERTIFICATEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateLoadBalancerTlsCertificateRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateLoadBalancerTlsCertificateRequest : public LightsailRequest {

public:
    CreateLoadBalancerTlsCertificateRequest(const CreateLoadBalancerTlsCertificateRequest &other);
    CreateLoadBalancerTlsCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerTlsCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
