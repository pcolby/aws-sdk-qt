// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSREQUEST_P_H
#define QTAWS_GETCUSTOMERGATEWAYASSOCIATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getcustomergatewayassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCustomerGatewayAssociationsRequest;

class GetCustomerGatewayAssociationsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetCustomerGatewayAssociationsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetCustomerGatewayAssociationsRequest * const q);
    GetCustomerGatewayAssociationsRequestPrivate(const GetCustomerGatewayAssociationsRequestPrivate &other,
                                   GetCustomerGatewayAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCustomerGatewayAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
