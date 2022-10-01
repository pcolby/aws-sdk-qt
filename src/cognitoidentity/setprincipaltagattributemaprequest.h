// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPRINCIPALTAGATTRIBUTEMAPREQUEST_H
#define QTAWS_SETPRINCIPALTAGATTRIBUTEMAPREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class SetPrincipalTagAttributeMapRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT SetPrincipalTagAttributeMapRequest : public CognitoIdentityRequest {

public:
    SetPrincipalTagAttributeMapRequest(const SetPrincipalTagAttributeMapRequest &other);
    SetPrincipalTagAttributeMapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetPrincipalTagAttributeMapRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
