// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBECACHEPARAMETERSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParametersResponse;

class DescribeCacheParametersResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeCacheParametersResponsePrivate(DescribeCacheParametersResponse * const q);

    void parseDescribeCacheParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheParametersResponse)
    Q_DISABLE_COPY(DescribeCacheParametersResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
