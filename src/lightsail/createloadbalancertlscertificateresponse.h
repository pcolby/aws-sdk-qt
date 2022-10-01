// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERTLSCERTIFICATERESPONSE_H
#define QTAWS_CREATELOADBALANCERTLSCERTIFICATERESPONSE_H

#include "lightsailresponse.h"
#include "createloadbalancertlscertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class CreateLoadBalancerTlsCertificateResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateLoadBalancerTlsCertificateResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateLoadBalancerTlsCertificateResponse(const CreateLoadBalancerTlsCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoadBalancerTlsCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerTlsCertificateResponse)
    Q_DISABLE_COPY(CreateLoadBalancerTlsCertificateResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
