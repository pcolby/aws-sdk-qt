// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSIGNUPREQUEST_H
#define QTAWS_CONFIRMSIGNUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmSignUpRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ConfirmSignUpRequest : public CognitoIdentityProviderRequest {

public:
    ConfirmSignUpRequest(const ConfirmSignUpRequest &other);
    ConfirmSignUpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmSignUpRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
