// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGOPENIDCONNECTPROVIDERREQUEST_H
#define QTAWS_TAGOPENIDCONNECTPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagOpenIDConnectProviderRequestPrivate;

class QTAWSIAM_EXPORT TagOpenIDConnectProviderRequest : public IamRequest {

public:
    TagOpenIDConnectProviderRequest(const TagOpenIDConnectProviderRequest &other);
    TagOpenIDConnectProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
