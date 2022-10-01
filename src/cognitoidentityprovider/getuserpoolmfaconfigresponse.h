// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOOLMFACONFIGRESPONSE_H
#define QTAWS_GETUSERPOOLMFACONFIGRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getuserpoolmfaconfigrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserPoolMfaConfigResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUserPoolMfaConfigResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetUserPoolMfaConfigResponse(const GetUserPoolMfaConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserPoolMfaConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserPoolMfaConfigResponse)
    Q_DISABLE_COPY(GetUserPoolMfaConfigResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
