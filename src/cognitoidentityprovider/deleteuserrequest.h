// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_H
#define QTAWS_DELETEUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserRequest : public CognitoIdentityProviderRequest {

public:
    DeleteUserRequest(const DeleteUserRequest &other);
    DeleteUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
