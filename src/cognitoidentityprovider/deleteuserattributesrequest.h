// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERATTRIBUTESREQUEST_H
#define QTAWS_DELETEUSERATTRIBUTESREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserAttributesRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserAttributesRequest : public CognitoIdentityProviderRequest {

public:
    DeleteUserAttributesRequest(const DeleteUserAttributesRequest &other);
    DeleteUserAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
