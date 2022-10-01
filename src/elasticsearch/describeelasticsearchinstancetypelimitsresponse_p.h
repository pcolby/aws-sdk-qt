// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHINSTANCETYPELIMITSRESPONSE_P_H
#define QTAWS_DESCRIBEELASTICSEARCHINSTANCETYPELIMITSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchInstanceTypeLimitsResponse;

class DescribeElasticsearchInstanceTypeLimitsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeElasticsearchInstanceTypeLimitsResponsePrivate(DescribeElasticsearchInstanceTypeLimitsResponse * const q);

    void parseDescribeElasticsearchInstanceTypeLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchInstanceTypeLimitsResponse)
    Q_DISABLE_COPY(DescribeElasticsearchInstanceTypeLimitsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
