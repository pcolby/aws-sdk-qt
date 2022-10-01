// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETUSERREQUEST_H
#define QTAWS_ADMINGETUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminGetUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminGetUserRequest(const AdminGetUserRequest &other);
    AdminGetUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminGetUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
