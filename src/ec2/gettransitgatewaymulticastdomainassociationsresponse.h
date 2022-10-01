// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "gettransitgatewaymulticastdomainassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayMulticastDomainAssociationsResponsePrivate;

class QTAWSEC2_EXPORT GetTransitGatewayMulticastDomainAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetTransitGatewayMulticastDomainAssociationsResponse(const GetTransitGatewayMulticastDomainAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayMulticastDomainAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayMulticastDomainAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayMulticastDomainAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
