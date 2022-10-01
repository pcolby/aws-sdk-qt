// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESERVERREQUEST_H
#define QTAWS_DELETERESOURCESERVERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteResourceServerRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteResourceServerRequest : public CognitoIdentityProviderRequest {

public:
    DeleteResourceServerRequest(const DeleteResourceServerRequest &other);
    DeleteResourceServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
