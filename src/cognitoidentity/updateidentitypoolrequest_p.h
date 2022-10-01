// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPOOLREQUEST_P_H
#define QTAWS_UPDATEIDENTITYPOOLREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "updateidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class UpdateIdentityPoolRequest;

class UpdateIdentityPoolRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    UpdateIdentityPoolRequestPrivate(const CognitoIdentityRequest::Action action,
                                   UpdateIdentityPoolRequest * const q);
    UpdateIdentityPoolRequestPrivate(const UpdateIdentityPoolRequestPrivate &other,
                                   UpdateIdentityPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
