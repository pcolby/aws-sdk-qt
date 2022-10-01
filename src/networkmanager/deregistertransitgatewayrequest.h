// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYREQUEST_H
#define QTAWS_DEREGISTERTRANSITGATEWAYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeregisterTransitGatewayRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeregisterTransitGatewayRequest : public NetworkManagerRequest {

public:
    DeregisterTransitGatewayRequest(const DeregisterTransitGatewayRequest &other);
    DeregisterTransitGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTransitGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
