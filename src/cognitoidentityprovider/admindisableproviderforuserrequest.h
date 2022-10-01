// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEPROVIDERFORUSERREQUEST_H
#define QTAWS_ADMINDISABLEPROVIDERFORUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableProviderForUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDisableProviderForUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminDisableProviderForUserRequest(const AdminDisableProviderForUserRequest &other);
    AdminDisableProviderForUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDisableProviderForUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
