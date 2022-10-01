// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINSRESPONSE_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINSRESPONSE_H

#include "elasticsearchresponse.h"
#include "describeelasticsearchdomainsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchDomainsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeElasticsearchDomainsResponse(const DescribeElasticsearchDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticsearchDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchDomainsResponse)
    Q_DISABLE_COPY(DescribeElasticsearchDomainsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
