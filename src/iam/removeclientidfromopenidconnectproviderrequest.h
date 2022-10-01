// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class RemoveClientIDFromOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT RemoveClientIDFromOpenIDConnectProviderRequest : public IamRequest {

public:
    RemoveClientIDFromOpenIDConnectProviderRequest(const RemoveClientIDFromOpenIDConnectProviderRequest &other);
    RemoveClientIDFromOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveClientIDFromOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
