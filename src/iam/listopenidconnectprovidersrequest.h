// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERSREQUEST_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProvidersRequestPrivate;

class QTAWSIAM_EXPORT ListOpenIDConnectProvidersRequest : public IamRequest {

public:
    ListOpenIDConnectProvidersRequest(const ListOpenIDConnectProvidersRequest &other);
    ListOpenIDConnectProvidersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpenIDConnectProvidersRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
