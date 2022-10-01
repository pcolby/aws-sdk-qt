// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERRESPONSE_H
#define QTAWS_ADMINDELETEUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admindeleteuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDeleteUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminDeleteUserResponse(const AdminDeleteUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminDeleteUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDeleteUserResponse)
    Q_DISABLE_COPY(AdminDeleteUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
