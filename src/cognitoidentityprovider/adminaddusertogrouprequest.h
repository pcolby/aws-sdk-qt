// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINADDUSERTOGROUPREQUEST_H
#define QTAWS_ADMINADDUSERTOGROUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminAddUserToGroupRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminAddUserToGroupRequest : public CognitoIdentityProviderRequest {

public:
    AdminAddUserToGroupRequest(const AdminAddUserToGroupRequest &other);
    AdminAddUserToGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminAddUserToGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
