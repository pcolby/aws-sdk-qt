// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPOOLREQUEST_H
#define QTAWS_UPDATEIDENTITYPOOLREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class UpdateIdentityPoolRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT UpdateIdentityPoolRequest : public CognitoIdentityRequest {

public:
    UpdateIdentityPoolRequest(const UpdateIdentityPoolRequest &other);
    UpdateIdentityPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
