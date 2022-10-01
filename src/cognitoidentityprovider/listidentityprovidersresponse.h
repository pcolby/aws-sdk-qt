// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERSRESPONSE_H
#define QTAWS_LISTIDENTITYPROVIDERSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listidentityprovidersrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListIdentityProvidersResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListIdentityProvidersResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListIdentityProvidersResponse(const ListIdentityProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityProvidersResponse)
    Q_DISABLE_COPY(ListIdentityProvidersResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
