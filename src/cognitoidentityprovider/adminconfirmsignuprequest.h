// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCONFIRMSIGNUPREQUEST_H
#define QTAWS_ADMINCONFIRMSIGNUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminConfirmSignUpRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminConfirmSignUpRequest : public CognitoIdentityProviderRequest {

public:
    AdminConfirmSignUpRequest(const AdminConfirmSignUpRequest &other);
    AdminConfirmSignUpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminConfirmSignUpRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
