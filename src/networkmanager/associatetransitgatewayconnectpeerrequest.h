// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_H
#define QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateTransitGatewayConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateTransitGatewayConnectPeerRequest : public NetworkManagerRequest {

public:
    AssociateTransitGatewayConnectPeerRequest(const AssociateTransitGatewayConnectPeerRequest &other);
    AssociateTransitGatewayConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
