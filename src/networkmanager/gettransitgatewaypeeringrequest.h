// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPEERINGREQUEST_H
#define QTAWS_GETTRANSITGATEWAYPEERINGREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayPeeringRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayPeeringRequest : public NetworkManagerRequest {

public:
    GetTransitGatewayPeeringRequest(const GetTransitGatewayPeeringRequest &other);
    GetTransitGatewayPeeringRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPeeringRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
