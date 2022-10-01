// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONFIRMATIONCODERESPONSE_H
#define QTAWS_RESENDCONFIRMATIONCODERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "resendconfirmationcoderequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ResendConfirmationCodeResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ResendConfirmationCodeResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ResendConfirmationCodeResponse(const ResendConfirmationCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResendConfirmationCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResendConfirmationCodeResponse)
    Q_DISABLE_COPY(ResendConfirmationCodeResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
