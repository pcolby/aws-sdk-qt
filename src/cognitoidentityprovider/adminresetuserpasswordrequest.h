// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESETUSERPASSWORDREQUEST_H
#define QTAWS_ADMINRESETUSERPASSWORDREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminResetUserPasswordRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminResetUserPasswordRequest : public CognitoIdentityProviderRequest {

public:
    AdminResetUserPasswordRequest(const AdminResetUserPasswordRequest &other);
    AdminResetUserPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminResetUserPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
