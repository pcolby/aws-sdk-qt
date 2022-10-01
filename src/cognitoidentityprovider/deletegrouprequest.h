// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPREQUEST_H
#define QTAWS_DELETEGROUPREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteGroupRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteGroupRequest : public CognitoIdentityProviderRequest {

public:
    DeleteGroupRequest(const DeleteGroupRequest &other);
    DeleteGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
