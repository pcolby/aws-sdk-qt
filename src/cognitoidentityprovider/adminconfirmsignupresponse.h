// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCONFIRMSIGNUPRESPONSE_H
#define QTAWS_ADMINCONFIRMSIGNUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminconfirmsignuprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminConfirmSignUpResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminConfirmSignUpResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminConfirmSignUpResponse(const AdminConfirmSignUpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminConfirmSignUpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminConfirmSignUpResponse)
    Q_DISABLE_COPY(AdminConfirmSignUpResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
