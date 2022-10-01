// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERTLSCERTIFICATEREQUEST_H
#define QTAWS_DELETELOADBALANCERTLSCERTIFICATEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteLoadBalancerTlsCertificateRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteLoadBalancerTlsCertificateRequest : public LightsailRequest {

public:
    DeleteLoadBalancerTlsCertificateRequest(const DeleteLoadBalancerTlsCertificateRequest &other);
    DeleteLoadBalancerTlsCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerTlsCertificateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
