// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMININITIATEAUTHREQUEST_H
#define QTAWS_ADMININITIATEAUTHREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminInitiateAuthRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminInitiateAuthRequest : public CognitoIdentityProviderRequest {

public:
    AdminInitiateAuthRequest(const AdminInitiateAuthRequest &other);
    AdminInitiateAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminInitiateAuthRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
