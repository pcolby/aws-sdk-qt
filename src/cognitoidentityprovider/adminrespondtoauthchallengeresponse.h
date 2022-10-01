// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESPONDTOAUTHCHALLENGERESPONSE_H
#define QTAWS_ADMINRESPONDTOAUTHCHALLENGERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminrespondtoauthchallengerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRespondToAuthChallengeResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminRespondToAuthChallengeResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminRespondToAuthChallengeResponse(const AdminRespondToAuthChallengeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminRespondToAuthChallengeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminRespondToAuthChallengeResponse)
    Q_DISABLE_COPY(AdminRespondToAuthChallengeResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
