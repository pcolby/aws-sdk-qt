// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETUSERRESPONSE_H
#define QTAWS_ADMINGETUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admingetuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminGetUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminGetUserResponse(const AdminGetUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminGetUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminGetUserResponse)
    Q_DISABLE_COPY(AdminGetUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
