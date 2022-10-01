// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_CREATEIDENTITYPROVIDERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "createidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateIdentityProviderResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateIdentityProviderResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    CreateIdentityProviderResponse(const CreateIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIdentityProviderResponse)
    Q_DISABLE_COPY(CreateIdentityProviderResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
