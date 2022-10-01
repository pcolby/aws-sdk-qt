// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSINGROUPREQUEST_H
#define QTAWS_LISTUSERSINGROUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUsersInGroupRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUsersInGroupRequest : public CognitoIdentityProviderRequest {

public:
    ListUsersInGroupRequest(const ListUsersInGroupRequest &other);
    ListUsersInGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersInGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
