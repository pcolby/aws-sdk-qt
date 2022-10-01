// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHECLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBECACHECLUSTERSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheClustersResponse;

class DescribeCacheClustersResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeCacheClustersResponsePrivate(DescribeCacheClustersResponse * const q);

    void parseDescribeCacheClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheClustersResponse)
    Q_DISABLE_COPY(DescribeCacheClustersResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
