// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERPOOLMFACONFIGRESPONSE_H
#define QTAWS_SETUSERPOOLMFACONFIGRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "setuserpoolmfaconfigrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserPoolMfaConfigResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUserPoolMfaConfigResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    SetUserPoolMfaConfigResponse(const SetUserPoolMfaConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetUserPoolMfaConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUserPoolMfaConfigResponse)
    Q_DISABLE_COPY(SetUserPoolMfaConfigResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
