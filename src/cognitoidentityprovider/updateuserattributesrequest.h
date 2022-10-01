// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERATTRIBUTESREQUEST_H
#define QTAWS_UPDATEUSERATTRIBUTESREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserAttributesRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateUserAttributesRequest : public CognitoIdentityProviderRequest {

public:
    UpdateUserAttributesRequest(const UpdateUserAttributesRequest &other);
    UpdateUserAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
