// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLSRESPONSE_H
#define QTAWS_LISTUSERPOOLSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listuserpoolsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUserPoolsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListUserPoolsResponse(const ListUserPoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserPoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserPoolsResponse)
    Q_DISABLE_COPY(ListUserPoolsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
