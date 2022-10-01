// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPRINCIPALTAGATTRIBUTEMAPREQUEST_P_H
#define QTAWS_SETPRINCIPALTAGATTRIBUTEMAPREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "setprincipaltagattributemaprequest.h"

namespace QtAws {
namespace CognitoIdentity {

class SetPrincipalTagAttributeMapRequest;

class SetPrincipalTagAttributeMapRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    SetPrincipalTagAttributeMapRequestPrivate(const CognitoIdentityRequest::Action action,
                                   SetPrincipalTagAttributeMapRequest * const q);
    SetPrincipalTagAttributeMapRequestPrivate(const SetPrincipalTagAttributeMapRequestPrivate &other,
                                   SetPrincipalTagAttributeMapRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetPrincipalTagAttributeMapRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
