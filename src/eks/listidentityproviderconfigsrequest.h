// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERCONFIGSREQUEST_H
#define QTAWS_LISTIDENTITYPROVIDERCONFIGSREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class ListIdentityProviderConfigsRequestPrivate;

class QTAWSEKS_EXPORT ListIdentityProviderConfigsRequest : public EksRequest {

public:
    ListIdentityProviderConfigsRequest(const ListIdentityProviderConfigsRequest &other);
    ListIdentityProviderConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityProviderConfigsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
