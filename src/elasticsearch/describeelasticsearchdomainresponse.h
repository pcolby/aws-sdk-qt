// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINRESPONSE_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINRESPONSE_H

#include "elasticsearchresponse.h"
#include "describeelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchDomainResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeElasticsearchDomainResponse(const DescribeElasticsearchDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticsearchDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchDomainResponse)
    Q_DISABLE_COPY(DescribeElasticsearchDomainResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
