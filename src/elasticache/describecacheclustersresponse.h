// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHECLUSTERSRESPONSE_H
#define QTAWS_DESCRIBECACHECLUSTERSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecacheclustersrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheClustersResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheClustersResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheClustersResponse(const DescribeCacheClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheClustersResponse)
    Q_DISABLE_COPY(DescribeCacheClustersResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
