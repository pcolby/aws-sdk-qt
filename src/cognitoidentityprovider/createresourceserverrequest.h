// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESERVERREQUEST_H
#define QTAWS_CREATERESOURCESERVERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateResourceServerRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateResourceServerRequest : public CognitoIdentityProviderRequest {

public:
    CreateResourceServerRequest(const CreateResourceServerRequest &other);
    CreateResourceServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
