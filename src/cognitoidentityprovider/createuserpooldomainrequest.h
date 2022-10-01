// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLDOMAINREQUEST_H
#define QTAWS_CREATEUSERPOOLDOMAINREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolDomainRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateUserPoolDomainRequest : public CognitoIdentityProviderRequest {

public:
    CreateUserPoolDomainRequest(const CreateUserPoolDomainRequest &other);
    CreateUserPoolDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
