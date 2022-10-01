// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLREQUEST_H
#define QTAWS_DELETEUSERPOOLREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserPoolRequest : public CognitoIdentityProviderRequest {

public:
    DeleteUserPoolRequest(const DeleteUserPoolRequest &other);
    DeleteUserPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPoolRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
