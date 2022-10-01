// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEUSERATTRIBUTESREQUEST_H
#define QTAWS_ADMINUPDATEUSERATTRIBUTESREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateUserAttributesRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminUpdateUserAttributesRequest : public CognitoIdentityProviderRequest {

public:
    AdminUpdateUserAttributesRequest(const AdminUpdateUserAttributesRequest &other);
    AdminUpdateUserAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminUpdateUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
