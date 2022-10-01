// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERTAGSREQUEST_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERTAGSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProviderTagsRequestPrivate;

class QTAWSIAM_EXPORT ListOpenIDConnectProviderTagsRequest : public IamRequest {

public:
    ListOpenIDConnectProviderTagsRequest(const ListOpenIDConnectProviderTagsRequest &other);
    ListOpenIDConnectProviderTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpenIDConnectProviderTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
