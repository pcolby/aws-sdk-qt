// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESUBNETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBECACHESUBNETGROUPSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSubnetGroupsResponse;

class DescribeCacheSubnetGroupsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeCacheSubnetGroupsResponsePrivate(DescribeCacheSubnetGroupsResponse * const q);

    void parseDescribeCacheSubnetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeCacheSubnetGroupsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
