// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESOFTWARETOKENREQUEST_H
#define QTAWS_ASSOCIATESOFTWARETOKENREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AssociateSoftwareTokenRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AssociateSoftwareTokenRequest : public CognitoIdentityProviderRequest {

public:
    AssociateSoftwareTokenRequest(const AssociateSoftwareTokenRequest &other);
    AssociateSoftwareTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSoftwareTokenRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
