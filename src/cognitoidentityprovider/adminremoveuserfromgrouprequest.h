// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINREMOVEUSERFROMGROUPREQUEST_H
#define QTAWS_ADMINREMOVEUSERFROMGROUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRemoveUserFromGroupRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminRemoveUserFromGroupRequest : public CognitoIdentityProviderRequest {

public:
    AdminRemoveUserFromGroupRequest(const AdminRemoveUserFromGroupRequest &other);
    AdminRemoveUserFromGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminRemoveUserFromGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
