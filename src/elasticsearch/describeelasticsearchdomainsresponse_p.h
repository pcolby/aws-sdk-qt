// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINSRESPONSE_P_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainsResponse;

class DescribeElasticsearchDomainsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeElasticsearchDomainsResponsePrivate(DescribeElasticsearchDomainsResponse * const q);

    void parseDescribeElasticsearchDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchDomainsResponse)
    Q_DISABLE_COPY(DescribeElasticsearchDomainsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
