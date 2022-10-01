// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOOLREQUEST_P_H
#define QTAWS_DELETEIDENTITYPOOLREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "deleteidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentityPoolRequest;

class DeleteIdentityPoolRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    DeleteIdentityPoolRequestPrivate(const CognitoIdentityRequest::Action action,
                                   DeleteIdentityPoolRequest * const q);
    DeleteIdentityPoolRequestPrivate(const DeleteIdentityPoolRequestPrivate &other,
                                   DeleteIdentityPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
