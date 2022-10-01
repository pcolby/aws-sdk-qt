// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_GETOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT GetOpenIDConnectProviderRequest : public IamRequest {

public:
    GetOpenIDConnectProviderRequest(const GetOpenIDConnectProviderRequest &other);
    GetOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
