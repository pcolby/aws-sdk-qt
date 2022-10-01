// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLRESPONSE_H
#define QTAWS_CREATEUSERPOOLRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "createuserpoolrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateUserPoolResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    CreateUserPoolResponse(const CreateUserPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserPoolResponse)
    Q_DISABLE_COPY(CreateUserPoolResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
