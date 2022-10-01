// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLROLESREQUEST_P_H
#define QTAWS_SETIDENTITYPOOLROLESREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "setidentitypoolrolesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class SetIdentityPoolRolesRequest;

class SetIdentityPoolRolesRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    SetIdentityPoolRolesRequestPrivate(const CognitoIdentityRequest::Action action,
                                   SetIdentityPoolRolesRequest * const q);
    SetIdentityPoolRolesRequestPrivate(const SetIdentityPoolRolesRequestPrivate &other,
                                   SetIdentityPoolRolesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityPoolRolesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
