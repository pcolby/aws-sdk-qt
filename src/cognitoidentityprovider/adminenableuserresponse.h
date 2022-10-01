// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINENABLEUSERRESPONSE_H
#define QTAWS_ADMINENABLEUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminenableuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminEnableUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminEnableUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminEnableUserResponse(const AdminEnableUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminEnableUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminEnableUserResponse)
    Q_DISABLE_COPY(AdminEnableUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
