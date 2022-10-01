// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESERVERSREQUEST_H
#define QTAWS_LISTRESOURCESERVERSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListResourceServersRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListResourceServersRequest : public CognitoIdentityProviderRequest {

public:
    ListResourceServersRequest(const ListResourceServersRequest &other);
    ListResourceServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceServersRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
