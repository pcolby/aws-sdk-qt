// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERATTRIBUTEVERIFICATIONCODEREQUEST_H
#define QTAWS_GETUSERATTRIBUTEVERIFICATIONCODEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserAttributeVerificationCodeRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUserAttributeVerificationCodeRequest : public CognitoIdentityProviderRequest {

public:
    GetUserAttributeVerificationCodeRequest(const GetUserAttributeVerificationCodeRequest &other);
    GetUserAttributeVerificationCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserAttributeVerificationCodeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
