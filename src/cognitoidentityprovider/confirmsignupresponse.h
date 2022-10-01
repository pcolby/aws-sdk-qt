// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSIGNUPRESPONSE_H
#define QTAWS_CONFIRMSIGNUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "confirmsignuprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmSignUpResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ConfirmSignUpResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ConfirmSignUpResponse(const ConfirmSignUpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmSignUpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmSignUpResponse)
    Q_DISABLE_COPY(ConfirmSignUpResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
