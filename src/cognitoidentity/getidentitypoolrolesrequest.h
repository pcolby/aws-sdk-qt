// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLROLESREQUEST_H
#define QTAWS_GETIDENTITYPOOLROLESREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdentityPoolRolesRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetIdentityPoolRolesRequest : public CognitoIdentityRequest {

public:
    GetIdentityPoolRolesRequest(const GetIdentityPoolRolesRequest &other);
    GetIdentityPoolRolesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityPoolRolesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
