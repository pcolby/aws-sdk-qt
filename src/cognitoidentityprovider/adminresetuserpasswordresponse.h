// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESETUSERPASSWORDRESPONSE_H
#define QTAWS_ADMINRESETUSERPASSWORDRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminresetuserpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminResetUserPasswordResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminResetUserPasswordResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminResetUserPasswordResponse(const AdminResetUserPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminResetUserPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminResetUserPasswordResponse)
    Q_DISABLE_COPY(AdminResetUserPasswordResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
