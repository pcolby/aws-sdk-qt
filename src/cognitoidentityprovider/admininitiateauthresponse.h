// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMININITIATEAUTHRESPONSE_H
#define QTAWS_ADMININITIATEAUTHRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admininitiateauthrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminInitiateAuthResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminInitiateAuthResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminInitiateAuthResponse(const AdminInitiateAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminInitiateAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminInitiateAuthResponse)
    Q_DISABLE_COPY(AdminInitiateAuthResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
