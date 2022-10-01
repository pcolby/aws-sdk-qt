// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLINKPROVIDERFORUSERREQUEST_H
#define QTAWS_ADMINLINKPROVIDERFORUSERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminLinkProviderForUserRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminLinkProviderForUserRequest : public CognitoIdentityProviderRequest {

public:
    AdminLinkProviderForUserRequest(const AdminLinkProviderForUserRequest &other);
    AdminLinkProviderForUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminLinkProviderForUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
