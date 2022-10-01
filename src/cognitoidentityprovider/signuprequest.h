// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNUPREQUEST_H
#define QTAWS_SIGNUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SignUpRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SignUpRequest : public CognitoIdentityProviderRequest {

public:
    SignUpRequest(const SignUpRequest &other);
    SignUpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignUpRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
