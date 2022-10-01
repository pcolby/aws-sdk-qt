// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESFORDOMAINREQUEST_P_H
#define QTAWS_LISTPACKAGESFORDOMAINREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "listpackagesfordomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListPackagesForDomainRequest;

class ListPackagesForDomainRequestPrivate : public ElasticsearchRequestPrivate {

public:
    ListPackagesForDomainRequestPrivate(const ElasticsearchRequest::Action action,
                                   ListPackagesForDomainRequest * const q);
    ListPackagesForDomainRequestPrivate(const ListPackagesForDomainRequestPrivate &other,
                                   ListPackagesForDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackagesForDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
