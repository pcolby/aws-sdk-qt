// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATERESPONSE_H
#define QTAWS_SETLOADBALANCERLISTENERSSLCERTIFICATERESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "setloadbalancerlistenersslcertificaterequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerListenerSSLCertificateResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT SetLoadBalancerListenerSSLCertificateResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    SetLoadBalancerListenerSSLCertificateResponse(const SetLoadBalancerListenerSSLCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLoadBalancerListenerSSLCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBalancerListenerSSLCertificateResponse)
    Q_DISABLE_COPY(SetLoadBalancerListenerSSLCertificateResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
