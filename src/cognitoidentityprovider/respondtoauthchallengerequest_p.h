// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDTOAUTHCHALLENGEREQUEST_P_H
#define QTAWS_RESPONDTOAUTHCHALLENGEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "respondtoauthchallengerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RespondToAuthChallengeRequest;

class RespondToAuthChallengeRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    RespondToAuthChallengeRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   RespondToAuthChallengeRequest * const q);
    RespondToAuthChallengeRequestPrivate(const RespondToAuthChallengeRequestPrivate &other,
                                   RespondToAuthChallengeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RespondToAuthChallengeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
