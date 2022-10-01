// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_UNTAGOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UntagOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT UntagOpenIDConnectProviderRequest : public IamRequest {

public:
    UntagOpenIDConnectProviderRequest(const UntagOpenIDConnectProviderRequest &other);
    UntagOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
