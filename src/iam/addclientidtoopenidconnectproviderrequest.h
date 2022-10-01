// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class AddClientIDToOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT AddClientIDToOpenIDConnectProviderRequest : public IamRequest {

public:
    AddClientIDToOpenIDConnectProviderRequest(const AddClientIDToOpenIDConnectProviderRequest &other);
    AddClientIDToOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddClientIDToOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
