// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSREQUEST_P_H
#define QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "getcompatibleelasticsearchversionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetCompatibleElasticsearchVersionsRequest;

class GetCompatibleElasticsearchVersionsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    GetCompatibleElasticsearchVersionsRequestPrivate(const ElasticsearchRequest::Action action,
                                   GetCompatibleElasticsearchVersionsRequest * const q);
    GetCompatibleElasticsearchVersionsRequestPrivate(const GetCompatibleElasticsearchVersionsRequestPrivate &other,
                                   GetCompatibleElasticsearchVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCompatibleElasticsearchVersionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
