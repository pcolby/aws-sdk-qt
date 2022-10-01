// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEAUTHRESPONSE_H
#define QTAWS_INITIATEAUTHRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "initiateauthrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class InitiateAuthResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT InitiateAuthResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    InitiateAuthResponse(const InitiateAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateAuthResponse)
    Q_DISABLE_COPY(InitiateAuthResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
