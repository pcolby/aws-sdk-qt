// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPROVIDERREQUEST_H
#define QTAWS_DELETEIDENTITYPROVIDERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteIdentityProviderRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteIdentityProviderRequest : public CognitoIdentityProviderRequest {

public:
    DeleteIdentityProviderRequest(const DeleteIdentityProviderRequest &other);
    DeleteIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
