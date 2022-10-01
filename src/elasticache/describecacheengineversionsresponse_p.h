// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEENGINEVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBECACHEENGINEVERSIONSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheEngineVersionsResponse;

class DescribeCacheEngineVersionsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeCacheEngineVersionsResponsePrivate(DescribeCacheEngineVersionsResponse * const q);

    void parseDescribeCacheEngineVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeCacheEngineVersionsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
