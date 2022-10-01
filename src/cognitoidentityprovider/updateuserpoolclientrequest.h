// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLCLIENTREQUEST_H
#define QTAWS_UPDATEUSERPOOLCLIENTREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolClientRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateUserPoolClientRequest : public CognitoIdentityProviderRequest {

public:
    UpdateUserPoolClientRequest(const UpdateUserPoolClientRequest &other);
    UpdateUserPoolClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
