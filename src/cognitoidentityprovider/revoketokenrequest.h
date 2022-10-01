// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKETOKENREQUEST_H
#define QTAWS_REVOKETOKENREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RevokeTokenRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT RevokeTokenRequest : public CognitoIdentityProviderRequest {

public:
    RevokeTokenRequest(const RevokeTokenRequest &other);
    RevokeTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeTokenRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
