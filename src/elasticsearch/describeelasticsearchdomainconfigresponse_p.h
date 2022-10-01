// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainConfigResponse;

class DescribeElasticsearchDomainConfigResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeElasticsearchDomainConfigResponsePrivate(DescribeElasticsearchDomainConfigResponse * const q);

    void parseDescribeElasticsearchDomainConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchDomainConfigResponse)
    Q_DISABLE_COPY(DescribeElasticsearchDomainConfigResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
