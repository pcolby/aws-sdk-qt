// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINENABLEUSERREQUEST_H
#define QTAWS_ADMINENABLEUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminEnableUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminEnableUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminEnableUserRequest(const AdminEnableUserRequest &other);
    AdminEnableUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminEnableUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
