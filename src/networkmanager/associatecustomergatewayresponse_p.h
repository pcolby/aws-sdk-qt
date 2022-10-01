// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMERGATEWAYRESPONSE_P_H
#define QTAWS_ASSOCIATECUSTOMERGATEWAYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class AssociateCustomerGatewayResponse;

class AssociateCustomerGatewayResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit AssociateCustomerGatewayResponsePrivate(AssociateCustomerGatewayResponse * const q);

    void parseAssociateCustomerGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateCustomerGatewayResponse)
    Q_DISABLE_COPY(AssociateCustomerGatewayResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
