// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUSERGLOBALSIGNOUTRESPONSE_H
#define QTAWS_ADMINUSERGLOBALSIGNOUTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminuserglobalsignoutrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUserGlobalSignOutResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminUserGlobalSignOutResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminUserGlobalSignOutResponse(const AdminUserGlobalSignOutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminUserGlobalSignOutRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminUserGlobalSignOutResponse)
    Q_DISABLE_COPY(AdminUserGlobalSignOutResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
