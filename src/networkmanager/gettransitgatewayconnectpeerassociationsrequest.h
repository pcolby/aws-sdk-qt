// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayConnectPeerAssociationsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayConnectPeerAssociationsRequest : public NetworkManagerRequest {

public:
    GetTransitGatewayConnectPeerAssociationsRequest(const GetTransitGatewayConnectPeerAssociationsRequest &other);
    GetTransitGatewayConnectPeerAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayConnectPeerAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
