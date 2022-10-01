// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLDOMAINRESPONSE_H
#define QTAWS_UPDATEUSERPOOLDOMAINRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updateuserpooldomainrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolDomainResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateUserPoolDomainResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateUserPoolDomainResponse(const UpdateUserPoolDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserPoolDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserPoolDomainResponse)
    Q_DISABLE_COPY(UpdateUserPoolDomainResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
