// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMFORGOTPASSWORDRESPONSE_H
#define QTAWS_CONFIRMFORGOTPASSWORDRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "confirmforgotpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmForgotPasswordResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ConfirmForgotPasswordResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ConfirmForgotPasswordResponse(const ConfirmForgotPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmForgotPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmForgotPasswordResponse)
    Q_DISABLE_COPY(ConfirmForgotPasswordResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
