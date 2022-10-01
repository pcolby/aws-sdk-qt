// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_DELETEOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT DeleteOpenIDConnectProviderRequest : public IamRequest {

public:
    DeleteOpenIDConnectProviderRequest(const DeleteOpenIDConnectProviderRequest &other);
    DeleteOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
