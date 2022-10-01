// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESREQUEST_P_H
#define QTAWS_LISTDOMAINNAMESREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "listdomainnamesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListDomainNamesRequest;

class ListDomainNamesRequestPrivate : public ElasticsearchRequestPrivate {

public:
    ListDomainNamesRequestPrivate(const ElasticsearchRequest::Action action,
                                   ListDomainNamesRequest * const q);
    ListDomainNamesRequestPrivate(const ListDomainNamesRequestPrivate &other,
                                   ListDomainNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainNamesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
