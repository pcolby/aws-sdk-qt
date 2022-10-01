// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHINSTANCETYPELIMITSRESPONSE_H
#define QTAWS_DESCRIBEELASTICSEARCHINSTANCETYPELIMITSRESPONSE_H

#include "elasticsearchresponse.h"
#include "describeelasticsearchinstancetypelimitsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchInstanceTypeLimitsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchInstanceTypeLimitsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeElasticsearchInstanceTypeLimitsResponse(const DescribeElasticsearchInstanceTypeLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticsearchInstanceTypeLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchInstanceTypeLimitsResponse)
    Q_DISABLE_COPY(DescribeElasticsearchInstanceTypeLimitsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
