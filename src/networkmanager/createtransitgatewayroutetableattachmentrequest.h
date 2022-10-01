// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayRouteTableAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateTransitGatewayRouteTableAttachmentRequest : public NetworkManagerRequest {

public:
    CreateTransitGatewayRouteTableAttachmentRequest(const CreateTransitGatewayRouteTableAttachmentRequest &other);
    CreateTransitGatewayRouteTableAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteTableAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
