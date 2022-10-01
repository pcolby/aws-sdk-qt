// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYREGISTRATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYREGISTRATIONSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRegistrationsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayRegistrationsRequest : public NetworkManagerRequest {

public:
    GetTransitGatewayRegistrationsRequest(const GetTransitGatewayRegistrationsRequest &other);
    GetTransitGatewayRegistrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRegistrationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
