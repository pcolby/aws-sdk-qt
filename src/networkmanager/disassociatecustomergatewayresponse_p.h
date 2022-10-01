// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMERGATEWAYRESPONSE_P_H
#define QTAWS_DISASSOCIATECUSTOMERGATEWAYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateCustomerGatewayResponse;

class DisassociateCustomerGatewayResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DisassociateCustomerGatewayResponsePrivate(DisassociateCustomerGatewayResponse * const q);

    void parseDisassociateCustomerGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateCustomerGatewayResponse)
    Q_DISABLE_COPY(DisassociateCustomerGatewayResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
