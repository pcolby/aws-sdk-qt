// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOOLREQUEST_H
#define QTAWS_DELETEIDENTITYPOOLREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentityPoolRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DeleteIdentityPoolRequest : public CognitoIdentityRequest {

public:
    DeleteIdentityPoolRequest(const DeleteIdentityPoolRequest &other);
    DeleteIdentityPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
