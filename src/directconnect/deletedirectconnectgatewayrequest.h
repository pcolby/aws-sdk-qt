// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYREQUEST_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteDirectConnectGatewayRequest : public DirectConnectRequest {

public:
    DeleteDirectConnectGatewayRequest(const DeleteDirectConnectGatewayRequest &other);
    DeleteDirectConnectGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectConnectGatewayRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
