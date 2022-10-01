// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENREQUEST_H
#define QTAWS_GETOPENIDTOKENREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetOpenIdTokenRequest : public CognitoIdentityRequest {

public:
    GetOpenIdTokenRequest(const GetOpenIdTokenRequest &other);
    GetOpenIdTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpenIdTokenRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
