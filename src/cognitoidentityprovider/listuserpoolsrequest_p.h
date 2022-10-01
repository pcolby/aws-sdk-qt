// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLSREQUEST_P_H
#define QTAWS_LISTUSERPOOLSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "listuserpoolsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolsRequest;

class ListUserPoolsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ListUserPoolsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ListUserPoolsRequest * const q);
    ListUserPoolsRequestPrivate(const ListUserPoolsRequestPrivate &other,
                                   ListUserPoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserPoolsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
