// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESOFTWARETOKENRESPONSE_H
#define QTAWS_ASSOCIATESOFTWARETOKENRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "associatesoftwaretokenrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AssociateSoftwareTokenResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AssociateSoftwareTokenResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AssociateSoftwareTokenResponse(const AssociateSoftwareTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSoftwareTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSoftwareTokenResponse)
    Q_DISABLE_COPY(AssociateSoftwareTokenResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
