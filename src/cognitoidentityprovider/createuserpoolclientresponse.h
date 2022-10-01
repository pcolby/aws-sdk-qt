// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLCLIENTRESPONSE_H
#define QTAWS_CREATEUSERPOOLCLIENTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "createuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolClientResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateUserPoolClientResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    CreateUserPoolClientResponse(const CreateUserPoolClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserPoolClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserPoolClientResponse)
    Q_DISABLE_COPY(CreateUserPoolClientResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
