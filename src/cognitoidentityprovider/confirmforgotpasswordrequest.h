// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMFORGOTPASSWORDREQUEST_H
#define QTAWS_CONFIRMFORGOTPASSWORDREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmForgotPasswordRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ConfirmForgotPasswordRequest : public CognitoIdentityProviderRequest {

public:
    ConfirmForgotPasswordRequest(const ConfirmForgotPasswordRequest &other);
    ConfirmForgotPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmForgotPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
