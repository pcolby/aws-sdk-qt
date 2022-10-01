// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGRESPONSE_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGRESPONSE_H

#include "elasticsearchresponse.h"
#include "describeelasticsearchdomainconfigrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainConfigResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchDomainConfigResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeElasticsearchDomainConfigResponse(const DescribeElasticsearchDomainConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticsearchDomainConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchDomainConfigResponse)
    Q_DISABLE_COPY(DescribeElasticsearchDomainConfigResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
