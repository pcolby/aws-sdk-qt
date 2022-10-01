// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENFORDEVELOPERIDENTITYREQUEST_H
#define QTAWS_GETOPENIDTOKENFORDEVELOPERIDENTITYREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenForDeveloperIdentityRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetOpenIdTokenForDeveloperIdentityRequest : public CognitoIdentityRequest {

public:
    GetOpenIdTokenForDeveloperIdentityRequest(const GetOpenIdTokenForDeveloperIdentityRequest &other);
    GetOpenIdTokenForDeveloperIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpenIdTokenForDeveloperIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
