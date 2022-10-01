// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLINKPROVIDERFORUSERRESPONSE_H
#define QTAWS_ADMINLINKPROVIDERFORUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminlinkproviderforuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminLinkProviderForUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminLinkProviderForUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminLinkProviderForUserResponse(const AdminLinkProviderForUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminLinkProviderForUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminLinkProviderForUserResponse)
    Q_DISABLE_COPY(AdminLinkProviderForUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
