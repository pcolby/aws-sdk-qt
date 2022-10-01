// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTLSCERTIFICATERESPONSE_H
#define QTAWS_ATTACHLOADBALANCERTLSCERTIFICATERESPONSE_H

#include "lightsailresponse.h"
#include "attachloadbalancertlscertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class AttachLoadBalancerTlsCertificateResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT AttachLoadBalancerTlsCertificateResponse : public LightsailResponse {
    Q_OBJECT

public:
    AttachLoadBalancerTlsCertificateResponse(const AttachLoadBalancerTlsCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachLoadBalancerTlsCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancerTlsCertificateResponse)
    Q_DISABLE_COPY(AttachLoadBalancerTlsCertificateResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
