// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMERGATEWAYRESPONSE_H
#define QTAWS_ASSOCIATECUSTOMERGATEWAYRESPONSE_H

#include "networkmanagerresponse.h"
#include "associatecustomergatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateCustomerGatewayResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateCustomerGatewayResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    AssociateCustomerGatewayResponse(const AssociateCustomerGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateCustomerGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCustomerGatewayResponse)
    Q_DISABLE_COPY(AssociateCustomerGatewayResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
