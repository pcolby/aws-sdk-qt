// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENFORDEVELOPERIDENTITYREQUEST_P_H
#define QTAWS_GETOPENIDTOKENFORDEVELOPERIDENTITYREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "getopenidtokenfordeveloperidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenForDeveloperIdentityRequest;

class GetOpenIdTokenForDeveloperIdentityRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    GetOpenIdTokenForDeveloperIdentityRequestPrivate(const CognitoIdentityRequest::Action action,
                                   GetOpenIdTokenForDeveloperIdentityRequest * const q);
    GetOpenIdTokenForDeveloperIdentityRequestPrivate(const GetOpenIdTokenForDeveloperIdentityRequestPrivate &other,
                                   GetOpenIdTokenForDeveloperIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOpenIdTokenForDeveloperIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
