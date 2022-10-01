// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLDOMAINREQUEST_H
#define QTAWS_DELETEUSERPOOLDOMAINREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolDomainRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserPoolDomainRequest : public CognitoIdentityProviderRequest {

public:
    DeleteUserPoolDomainRequest(const DeleteUserPoolDomainRequest &other);
    DeleteUserPoolDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
