// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLCLIENTREQUEST_H
#define QTAWS_CREATEUSERPOOLCLIENTREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolClientRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateUserPoolClientRequest : public CognitoIdentityProviderRequest {

public:
    CreateUserPoolClientRequest(const CreateUserPoolClientRequest &other);
    CreateUserPoolClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
