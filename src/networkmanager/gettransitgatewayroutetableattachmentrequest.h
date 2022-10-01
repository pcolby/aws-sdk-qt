// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRouteTableAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayRouteTableAttachmentRequest : public NetworkManagerRequest {

public:
    GetTransitGatewayRouteTableAttachmentRequest(const GetTransitGatewayRouteTableAttachmentRequest &other);
    GetTransitGatewayRouteTableAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRouteTableAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
