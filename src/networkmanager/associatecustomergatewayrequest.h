// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMERGATEWAYREQUEST_H
#define QTAWS_ASSOCIATECUSTOMERGATEWAYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateCustomerGatewayRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateCustomerGatewayRequest : public NetworkManagerRequest {

public:
    AssociateCustomerGatewayRequest(const AssociateCustomerGatewayRequest &other);
    AssociateCustomerGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCustomerGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
