// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKETOKENRESPONSE_H
#define QTAWS_REVOKETOKENRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "revoketokenrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RevokeTokenResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT RevokeTokenResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    RevokeTokenResponse(const RevokeTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeTokenResponse)
    Q_DISABLE_COPY(RevokeTokenResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
