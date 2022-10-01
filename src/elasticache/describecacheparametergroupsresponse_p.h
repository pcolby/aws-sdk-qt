// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBECACHEPARAMETERGROUPSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParameterGroupsResponse;

class DescribeCacheParameterGroupsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeCacheParameterGroupsResponsePrivate(DescribeCacheParameterGroupsResponse * const q);

    void parseDescribeCacheParameterGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeCacheParameterGroupsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
