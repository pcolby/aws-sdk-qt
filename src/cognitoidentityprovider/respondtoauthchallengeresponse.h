// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDTOAUTHCHALLENGERESPONSE_H
#define QTAWS_RESPONDTOAUTHCHALLENGERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "respondtoauthchallengerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RespondToAuthChallengeResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT RespondToAuthChallengeResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    RespondToAuthChallengeResponse(const RespondToAuthChallengeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RespondToAuthChallengeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondToAuthChallengeResponse)
    Q_DISABLE_COPY(RespondToAuthChallengeResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
