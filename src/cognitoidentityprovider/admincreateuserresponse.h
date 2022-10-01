// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCREATEUSERRESPONSE_H
#define QTAWS_ADMINCREATEUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admincreateuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminCreateUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminCreateUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminCreateUserResponse(const AdminCreateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminCreateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminCreateUserResponse)
    Q_DISABLE_COPY(AdminCreateUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
