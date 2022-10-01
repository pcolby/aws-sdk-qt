// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSREQUEST_H
#define QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCustomerGatewayAssociationsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCustomerGatewayAssociationsRequest : public NetworkManagerRequest {

public:
    GetCustomerGatewayAssociationsRequest(const GetCustomerGatewayAssociationsRequest &other);
    GetCustomerGatewayAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomerGatewayAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
