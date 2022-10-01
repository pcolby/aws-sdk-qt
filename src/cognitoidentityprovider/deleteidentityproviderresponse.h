// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_DELETEIDENTITYPROVIDERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteIdentityProviderResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteIdentityProviderResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteIdentityProviderResponse(const DeleteIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityProviderResponse)
    Q_DISABLE_COPY(DeleteIdentityProviderResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
