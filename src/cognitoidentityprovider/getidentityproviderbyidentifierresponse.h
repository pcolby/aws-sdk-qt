// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERRESPONSE_H
#define QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getidentityproviderbyidentifierrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetIdentityProviderByIdentifierResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetIdentityProviderByIdentifierResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetIdentityProviderByIdentifierResponse(const GetIdentityProviderByIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityProviderByIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityProviderByIdentifierResponse)
    Q_DISABLE_COPY(GetIdentityProviderByIdentifierResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
