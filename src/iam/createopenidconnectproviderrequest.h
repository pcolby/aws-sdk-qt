// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_CREATEOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT CreateOpenIDConnectProviderRequest : public IamRequest {

public:
    CreateOpenIDConnectProviderRequest(const CreateOpenIDConnectProviderRequest &other);
    CreateOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
