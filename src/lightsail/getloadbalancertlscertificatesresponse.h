// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERTLSCERTIFICATESRESPONSE_H
#define QTAWS_GETLOADBALANCERTLSCERTIFICATESRESPONSE_H

#include "lightsailresponse.h"
#include "getloadbalancertlscertificatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerTlsCertificatesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerTlsCertificatesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetLoadBalancerTlsCertificatesResponse(const GetLoadBalancerTlsCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoadBalancerTlsCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerTlsCertificatesResponse)
    Q_DISABLE_COPY(GetLoadBalancerTlsCertificatesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
