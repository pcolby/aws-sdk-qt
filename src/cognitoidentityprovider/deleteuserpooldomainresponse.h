// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLDOMAINRESPONSE_H
#define QTAWS_DELETEUSERPOOLDOMAINRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteuserpooldomainrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolDomainResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserPoolDomainResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteUserPoolDomainResponse(const DeleteUserPoolDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserPoolDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPoolDomainResponse)
    Q_DISABLE_COPY(DeleteUserPoolDomainResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
