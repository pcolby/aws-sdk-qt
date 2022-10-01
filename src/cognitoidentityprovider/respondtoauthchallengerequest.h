// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDTOAUTHCHALLENGEREQUEST_H
#define QTAWS_RESPONDTOAUTHCHALLENGEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RespondToAuthChallengeRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT RespondToAuthChallengeRequest : public CognitoIdentityProviderRequest {

public:
    RespondToAuthChallengeRequest(const RespondToAuthChallengeRequest &other);
    RespondToAuthChallengeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondToAuthChallengeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
