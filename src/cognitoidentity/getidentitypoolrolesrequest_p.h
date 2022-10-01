// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLROLESREQUEST_P_H
#define QTAWS_GETIDENTITYPOOLROLESREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "getidentitypoolrolesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdentityPoolRolesRequest;

class GetIdentityPoolRolesRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    GetIdentityPoolRolesRequestPrivate(const CognitoIdentityRequest::Action action,
                                   GetIdentityPoolRolesRequest * const q);
    GetIdentityPoolRolesRequestPrivate(const GetIdentityPoolRolesRequestPrivate &other,
                                   GetIdentityPoolRolesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoolRolesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
