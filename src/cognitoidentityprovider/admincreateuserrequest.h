// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCREATEUSERREQUEST_H
#define QTAWS_ADMINCREATEUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminCreateUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminCreateUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminCreateUserRequest(const AdminCreateUserRequest &other);
    AdminCreateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminCreateUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
