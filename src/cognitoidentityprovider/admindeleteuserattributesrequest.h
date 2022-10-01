// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERATTRIBUTESREQUEST_H
#define QTAWS_ADMINDELETEUSERATTRIBUTESREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserAttributesRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDeleteUserAttributesRequest : public CognitoIdentityProviderRequest {

public:
    AdminDeleteUserAttributesRequest(const AdminDeleteUserAttributesRequest &other);
    AdminDeleteUserAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDeleteUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
