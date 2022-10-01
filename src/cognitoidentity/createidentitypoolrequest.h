// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPOOLREQUEST_H
#define QTAWS_CREATEIDENTITYPOOLREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class CreateIdentityPoolRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT CreateIdentityPoolRequest : public CognitoIdentityRequest {

public:
    CreateIdentityPoolRequest(const CreateIdentityPoolRequest &other);
    CreateIdentityPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
