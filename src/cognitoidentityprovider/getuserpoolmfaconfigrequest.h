// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOOLMFACONFIGREQUEST_H
#define QTAWS_GETUSERPOOLMFACONFIGREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserPoolMfaConfigRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUserPoolMfaConfigRequest : public CognitoIdentityProviderRequest {

public:
    GetUserPoolMfaConfigRequest(const GetUserPoolMfaConfigRequest &other);
    GetUserPoolMfaConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserPoolMfaConfigRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
