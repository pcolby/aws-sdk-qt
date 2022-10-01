// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLCLIENTSREQUEST_P_H
#define QTAWS_LISTUSERPOOLCLIENTSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "listuserpoolclientsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolClientsRequest;

class ListUserPoolClientsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ListUserPoolClientsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ListUserPoolClientsRequest * const q);
    ListUserPoolClientsRequestPrivate(const ListUserPoolClientsRequestPrivate &other,
                                   ListUserPoolClientsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserPoolClientsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
