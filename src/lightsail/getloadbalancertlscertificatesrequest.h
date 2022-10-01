// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERTLSCERTIFICATESREQUEST_H
#define QTAWS_GETLOADBALANCERTLSCERTIFICATESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerTlsCertificatesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerTlsCertificatesRequest : public LightsailRequest {

public:
    GetLoadBalancerTlsCertificatesRequest(const GetLoadBalancerTlsCertificatesRequest &other);
    GetLoadBalancerTlsCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerTlsCertificatesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
