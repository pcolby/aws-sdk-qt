// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSFORIDENTITYREQUEST_P_H
#define QTAWS_GETCREDENTIALSFORIDENTITYREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "getcredentialsforidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetCredentialsForIdentityRequest;

class GetCredentialsForIdentityRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    GetCredentialsForIdentityRequestPrivate(const CognitoIdentityRequest::Action action,
                                   GetCredentialsForIdentityRequest * const q);
    GetCredentialsForIdentityRequestPrivate(const GetCredentialsForIdentityRequestPrivate &other,
                                   GetCredentialsForIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCredentialsForIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
