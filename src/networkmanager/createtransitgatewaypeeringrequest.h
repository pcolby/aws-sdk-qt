// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayPeeringRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateTransitGatewayPeeringRequest : public NetworkManagerRequest {

public:
    CreateTransitGatewayPeeringRequest(const CreateTransitGatewayPeeringRequest &other);
    CreateTransitGatewayPeeringRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPeeringRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
