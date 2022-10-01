// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMERGATEWAYREQUEST_H
#define QTAWS_DISASSOCIATECUSTOMERGATEWAYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateCustomerGatewayRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateCustomerGatewayRequest : public NetworkManagerRequest {

public:
    DisassociateCustomerGatewayRequest(const DisassociateCustomerGatewayRequest &other);
    DisassociateCustomerGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCustomerGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
