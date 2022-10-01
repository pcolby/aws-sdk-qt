// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLCLIENTREQUEST_H
#define QTAWS_DELETEUSERPOOLCLIENTREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolClientRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserPoolClientRequest : public CognitoIdentityProviderRequest {

public:
    DeleteUserPoolClientRequest(const DeleteUserPoolClientRequest &other);
    DeleteUserPoolClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
