// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEAUTHREQUEST_H
#define QTAWS_INITIATEAUTHREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class InitiateAuthRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT InitiateAuthRequest : public CognitoIdentityProviderRequest {

public:
    InitiateAuthRequest(const InitiateAuthRequest &other);
    InitiateAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateAuthRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
