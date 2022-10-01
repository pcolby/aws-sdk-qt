// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHINSTANCETYPELIMITSREQUEST_P_H
#define QTAWS_DESCRIBEELASTICSEARCHINSTANCETYPELIMITSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describeelasticsearchinstancetypelimitsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchInstanceTypeLimitsRequest;

class DescribeElasticsearchInstanceTypeLimitsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeElasticsearchInstanceTypeLimitsRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeElasticsearchInstanceTypeLimitsRequest * const q);
    DescribeElasticsearchInstanceTypeLimitsRequestPrivate(const DescribeElasticsearchInstanceTypeLimitsRequestPrivate &other,
                                   DescribeElasticsearchInstanceTypeLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchInstanceTypeLimitsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
