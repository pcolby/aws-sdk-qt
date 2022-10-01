// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSFORPACKAGEREQUEST_P_H
#define QTAWS_LISTDOMAINSFORPACKAGEREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "listdomainsforpackagerequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListDomainsForPackageRequest;

class ListDomainsForPackageRequestPrivate : public ElasticsearchRequestPrivate {

public:
    ListDomainsForPackageRequestPrivate(const ElasticsearchRequest::Action action,
                                   ListDomainsForPackageRequest * const q);
    ListDomainsForPackageRequestPrivate(const ListDomainsForPackageRequestPrivate &other,
                                   ListDomainsForPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainsForPackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
