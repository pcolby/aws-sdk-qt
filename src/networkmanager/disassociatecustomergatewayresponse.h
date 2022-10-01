// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMERGATEWAYRESPONSE_H
#define QTAWS_DISASSOCIATECUSTOMERGATEWAYRESPONSE_H

#include "networkmanagerresponse.h"
#include "disassociatecustomergatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateCustomerGatewayResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateCustomerGatewayResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DisassociateCustomerGatewayResponse(const DisassociateCustomerGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateCustomerGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCustomerGatewayResponse)
    Q_DISABLE_COPY(DisassociateCustomerGatewayResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
