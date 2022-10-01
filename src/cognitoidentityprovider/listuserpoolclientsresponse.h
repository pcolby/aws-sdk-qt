// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLCLIENTSRESPONSE_H
#define QTAWS_LISTUSERPOOLCLIENTSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listuserpoolclientsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolClientsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUserPoolClientsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListUserPoolClientsResponse(const ListUserPoolClientsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserPoolClientsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserPoolClientsResponse)
    Q_DISABLE_COPY(ListUserPoolClientsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
