// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRINCIPALTAGATTRIBUTEMAPREQUEST_P_H
#define QTAWS_GETPRINCIPALTAGATTRIBUTEMAPREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "getprincipaltagattributemaprequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetPrincipalTagAttributeMapRequest;

class GetPrincipalTagAttributeMapRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    GetPrincipalTagAttributeMapRequestPrivate(const CognitoIdentityRequest::Action action,
                                   GetPrincipalTagAttributeMapRequest * const q);
    GetPrincipalTagAttributeMapRequestPrivate(const GetPrincipalTagAttributeMapRequestPrivate &other,
                                   GetPrincipalTagAttributeMapRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPrincipalTagAttributeMapRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
