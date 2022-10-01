// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHVERSIONSREQUEST_P_H
#define QTAWS_LISTELASTICSEARCHVERSIONSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "listelasticsearchversionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchVersionsRequest;

class ListElasticsearchVersionsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    ListElasticsearchVersionsRequestPrivate(const ElasticsearchRequest::Action action,
                                   ListElasticsearchVersionsRequest * const q);
    ListElasticsearchVersionsRequestPrivate(const ListElasticsearchVersionsRequestPrivate &other,
                                   ListElasticsearchVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListElasticsearchVersionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
