// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENRESPONSE_H
#define QTAWS_GETOPENIDTOKENRESPONSE_H

#include "cognitoidentityresponse.h"
#include "getopenidtokenrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetOpenIdTokenResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    GetOpenIdTokenResponse(const GetOpenIdTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOpenIdTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpenIdTokenResponse)
    Q_DISABLE_COPY(GetOpenIdTokenResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
