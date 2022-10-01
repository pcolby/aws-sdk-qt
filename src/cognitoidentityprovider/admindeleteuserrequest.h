// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERREQUEST_H
#define QTAWS_ADMINDELETEUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDeleteUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminDeleteUserRequest(const AdminDeleteUserRequest &other);
    AdminDeleteUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDeleteUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
