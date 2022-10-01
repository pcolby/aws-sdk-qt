// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLROLESREQUEST_H
#define QTAWS_SETIDENTITYPOOLROLESREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class SetIdentityPoolRolesRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT SetIdentityPoolRolesRequest : public CognitoIdentityRequest {

public:
    SetIdentityPoolRolesRequest(const SetIdentityPoolRolesRequest &other);
    SetIdentityPoolRolesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityPoolRolesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
