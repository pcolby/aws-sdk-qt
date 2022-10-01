// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSOFTWARETOKENRESPONSE_H
#define QTAWS_VERIFYSOFTWARETOKENRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "verifysoftwaretokenrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class VerifySoftwareTokenResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT VerifySoftwareTokenResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    VerifySoftwareTokenResponse(const VerifySoftwareTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifySoftwareTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifySoftwareTokenResponse)
    Q_DISABLE_COPY(VerifySoftwareTokenResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
