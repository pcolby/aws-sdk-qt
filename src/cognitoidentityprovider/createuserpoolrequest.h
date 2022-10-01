// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLREQUEST_H
#define QTAWS_CREATEUSERPOOLREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateUserPoolRequest : public CognitoIdentityProviderRequest {

public:
    CreateUserPoolRequest(const CreateUserPoolRequest &other);
    CreateUserPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserPoolRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
