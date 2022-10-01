// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H

#include "ec2response.h"
#include "createtransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayMulticastDomainResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayMulticastDomainResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayMulticastDomainResponse(const CreateTransitGatewayMulticastDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayMulticastDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(CreateTransitGatewayMulticastDomainResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
