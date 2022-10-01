// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHINSTANCETYPESREQUEST_P_H
#define QTAWS_LISTELASTICSEARCHINSTANCETYPESREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "listelasticsearchinstancetypesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchInstanceTypesRequest;

class ListElasticsearchInstanceTypesRequestPrivate : public ElasticsearchRequestPrivate {

public:
    ListElasticsearchInstanceTypesRequestPrivate(const ElasticsearchRequest::Action action,
                                   ListElasticsearchInstanceTypesRequest * const q);
    ListElasticsearchInstanceTypesRequestPrivate(const ListElasticsearchInstanceTypesRequestPrivate &other,
                                   ListElasticsearchInstanceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListElasticsearchInstanceTypesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
