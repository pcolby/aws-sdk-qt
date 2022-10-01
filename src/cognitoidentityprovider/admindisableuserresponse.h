// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEUSERRESPONSE_H
#define QTAWS_ADMINDISABLEUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admindisableuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDisableUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminDisableUserResponse(const AdminDisableUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminDisableUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDisableUserResponse)
    Q_DISABLE_COPY(AdminDisableUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
