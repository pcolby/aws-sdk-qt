// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERRESPONSE_H
#define QTAWS_GETUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetUserResponse(const GetUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserResponse)
    Q_DISABLE_COPY(GetUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
