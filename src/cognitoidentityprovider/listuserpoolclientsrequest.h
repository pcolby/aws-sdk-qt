// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLCLIENTSREQUEST_H
#define QTAWS_LISTUSERPOOLCLIENTSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolClientsRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUserPoolClientsRequest : public CognitoIdentityProviderRequest {

public:
    ListUserPoolClientsRequest(const ListUserPoolClientsRequest &other);
    ListUserPoolClientsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserPoolClientsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
