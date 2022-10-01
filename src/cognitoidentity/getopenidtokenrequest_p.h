// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENREQUEST_P_H
#define QTAWS_GETOPENIDTOKENREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "getopenidtokenrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenRequest;

class GetOpenIdTokenRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    GetOpenIdTokenRequestPrivate(const CognitoIdentityRequest::Action action,
                                   GetOpenIdTokenRequest * const q);
    GetOpenIdTokenRequestPrivate(const GetOpenIdTokenRequestPrivate &other,
                                   GetOpenIdTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOpenIdTokenRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
