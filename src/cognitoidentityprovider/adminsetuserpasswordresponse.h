// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERPASSWORDRESPONSE_H
#define QTAWS_ADMINSETUSERPASSWORDRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminsetuserpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserPasswordResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminSetUserPasswordResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminSetUserPasswordResponse(const AdminSetUserPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminSetUserPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminSetUserPasswordResponse)
    Q_DISABLE_COPY(AdminSetUserPasswordResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
