// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGOTPASSWORDRESPONSE_H
#define QTAWS_FORGOTPASSWORDRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "forgotpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgotPasswordResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ForgotPasswordResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ForgotPasswordResponse(const ForgotPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ForgotPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForgotPasswordResponse)
    Q_DISABLE_COPY(ForgotPasswordResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
