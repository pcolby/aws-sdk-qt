// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSRESPONSE_H
#define QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getcustomergatewayassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCustomerGatewayAssociationsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCustomerGatewayAssociationsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetCustomerGatewayAssociationsResponse(const GetCustomerGatewayAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCustomerGatewayAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomerGatewayAssociationsResponse)
    Q_DISABLE_COPY(GetCustomerGatewayAssociationsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
