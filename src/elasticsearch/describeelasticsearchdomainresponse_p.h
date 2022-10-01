// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINRESPONSE_P_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainResponse;

class DescribeElasticsearchDomainResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeElasticsearchDomainResponsePrivate(DescribeElasticsearchDomainResponse * const q);

    void parseDescribeElasticsearchDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchDomainResponse)
    Q_DISABLE_COPY(DescribeElasticsearchDomainResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
