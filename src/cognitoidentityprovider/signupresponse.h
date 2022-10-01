// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNUPRESPONSE_H
#define QTAWS_SIGNUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "signuprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SignUpResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SignUpResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    SignUpResponse(const SignUpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SignUpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignUpResponse)
    Q_DISABLE_COPY(SignUpResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
