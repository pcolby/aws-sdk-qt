// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERREQUEST_H
#define QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetIdentityProviderByIdentifierRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetIdentityProviderByIdentifierRequest : public CognitoIdentityProviderRequest {

public:
    GetIdentityProviderByIdentifierRequest(const GetIdentityProviderByIdentifierRequest &other);
    GetIdentityProviderByIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityProviderByIdentifierRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
