// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESPONDTOAUTHCHALLENGEREQUEST_P_H
#define QTAWS_ADMINRESPONDTOAUTHCHALLENGEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminrespondtoauthchallengerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRespondToAuthChallengeRequest;

class AdminRespondToAuthChallengeRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminRespondToAuthChallengeRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminRespondToAuthChallengeRequest * const q);
    AdminRespondToAuthChallengeRequestPrivate(const AdminRespondToAuthChallengeRequestPrivate &other,
                                   AdminRespondToAuthChallengeRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminRespondToAuthChallengeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
