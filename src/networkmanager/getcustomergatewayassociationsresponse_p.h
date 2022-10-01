// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetCustomerGatewayAssociationsResponse;

class GetCustomerGatewayAssociationsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetCustomerGatewayAssociationsResponsePrivate(GetCustomerGatewayAssociationsResponse * const q);

    void parseGetCustomerGatewayAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCustomerGatewayAssociationsResponse)
    Q_DISABLE_COPY(GetCustomerGatewayAssociationsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
