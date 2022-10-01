// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEPROVIDERFORUSERRESPONSE_H
#define QTAWS_ADMINDISABLEPROVIDERFORUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admindisableproviderforuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableProviderForUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDisableProviderForUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminDisableProviderForUserResponse(const AdminDisableProviderForUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminDisableProviderForUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDisableProviderForUserResponse)
    Q_DISABLE_COPY(AdminDisableProviderForUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
