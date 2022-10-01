// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESPONDTOAUTHCHALLENGEREQUEST_H
#define QTAWS_ADMINRESPONDTOAUTHCHALLENGEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRespondToAuthChallengeRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminRespondToAuthChallengeRequest : public CognitoIdentityProviderRequest {

public:
    AdminRespondToAuthChallengeRequest(const AdminRespondToAuthChallengeRequest &other);
    AdminRespondToAuthChallengeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminRespondToAuthChallengeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
