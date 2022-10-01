// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTGROUPSFORUSERREQUEST_H
#define QTAWS_ADMINLISTGROUPSFORUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListGroupsForUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminListGroupsForUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminListGroupsForUserRequest(const AdminListGroupsForUserRequest &other);
    AdminListGroupsForUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminListGroupsForUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
