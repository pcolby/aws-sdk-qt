// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRINCIPALTAGATTRIBUTEMAPREQUEST_H
#define QTAWS_GETPRINCIPALTAGATTRIBUTEMAPREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetPrincipalTagAttributeMapRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetPrincipalTagAttributeMapRequest : public CognitoIdentityRequest {

public:
    GetPrincipalTagAttributeMapRequest(const GetPrincipalTagAttributeMapRequest &other);
    GetPrincipalTagAttributeMapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPrincipalTagAttributeMapRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
