// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYREQUEST_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateDirectConnectGatewayRequest : public DirectConnectRequest {

public:
    UpdateDirectConnectGatewayRequest(const UpdateDirectConnectGatewayRequest &other);
    UpdateDirectConnectGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDirectConnectGatewayRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
