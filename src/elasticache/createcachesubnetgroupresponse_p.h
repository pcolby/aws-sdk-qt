// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATECACHESUBNETGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSubnetGroupResponse;

class CreateCacheSubnetGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateCacheSubnetGroupResponsePrivate(CreateCacheSubnetGroupResponse * const q);

    void parseCreateCacheSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCacheSubnetGroupResponse)
    Q_DISABLE_COPY(CreateCacheSubnetGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
