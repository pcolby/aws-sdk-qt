// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYREQUEST_H
#define QTAWS_REGISTERTRANSITGATEWAYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class RegisterTransitGatewayRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT RegisterTransitGatewayRequest : public NetworkManagerRequest {

public:
    RegisterTransitGatewayRequest(const RegisterTransitGatewayRequest &other);
    RegisterTransitGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTransitGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
