// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSFORPACKAGEREQUEST_H
#define QTAWS_LISTDOMAINSFORPACKAGEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListDomainsForPackageRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT ListDomainsForPackageRequest : public ElasticsearchRequest {

public:
    ListDomainsForPackageRequest(const ListDomainsForPackageRequest &other);
    ListDomainsForPackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainsForPackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
