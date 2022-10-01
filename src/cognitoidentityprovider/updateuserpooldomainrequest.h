// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLDOMAINREQUEST_H
#define QTAWS_UPDATEUSERPOOLDOMAINREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolDomainRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateUserPoolDomainRequest : public CognitoIdentityProviderRequest {

public:
    UpdateUserPoolDomainRequest(const UpdateUserPoolDomainRequest &other);
    UpdateUserPoolDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
