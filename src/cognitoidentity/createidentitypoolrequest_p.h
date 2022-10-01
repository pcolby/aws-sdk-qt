// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPOOLREQUEST_P_H
#define QTAWS_CREATEIDENTITYPOOLREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "createidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class CreateIdentityPoolRequest;

class CreateIdentityPoolRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    CreateIdentityPoolRequestPrivate(const CognitoIdentityRequest::Action action,
                                   CreateIdentityPoolRequest * const q);
    CreateIdentityPoolRequestPrivate(const CreateIdentityPoolRequestPrivate &other,
                                   CreateIdentityPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
