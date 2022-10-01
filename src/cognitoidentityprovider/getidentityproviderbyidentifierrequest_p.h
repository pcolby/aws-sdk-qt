// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERREQUEST_P_H
#define QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "getidentityproviderbyidentifierrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetIdentityProviderByIdentifierRequest;

class GetIdentityProviderByIdentifierRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GetIdentityProviderByIdentifierRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GetIdentityProviderByIdentifierRequest * const q);
    GetIdentityProviderByIdentifierRequestPrivate(const GetIdentityProviderByIdentifierRequestPrivate &other,
                                   GetIdentityProviderByIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityProviderByIdentifierRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
