// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBECACHEPARAMETERSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecacheparametersrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParametersResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheParametersResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheParametersResponse(const DescribeCacheParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheParametersResponse)
    Q_DISABLE_COPY(DescribeCacheParametersResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
