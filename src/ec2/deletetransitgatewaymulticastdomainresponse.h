// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayMulticastDomainResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayMulticastDomainResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayMulticastDomainResponse(const DeleteTransitGatewayMulticastDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayMulticastDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayMulticastDomainResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
