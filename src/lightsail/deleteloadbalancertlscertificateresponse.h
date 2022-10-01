// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERTLSCERTIFICATERESPONSE_H
#define QTAWS_DELETELOADBALANCERTLSCERTIFICATERESPONSE_H

#include "lightsailresponse.h"
#include "deleteloadbalancertlscertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteLoadBalancerTlsCertificateResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteLoadBalancerTlsCertificateResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteLoadBalancerTlsCertificateResponse(const DeleteLoadBalancerTlsCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLoadBalancerTlsCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerTlsCertificateResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerTlsCertificateResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
