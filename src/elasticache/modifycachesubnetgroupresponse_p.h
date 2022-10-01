// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHESUBNETGROUPRESPONSE_P_H
#define QTAWS_MODIFYCACHESUBNETGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheSubnetGroupResponse;

class ModifyCacheSubnetGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyCacheSubnetGroupResponsePrivate(ModifyCacheSubnetGroupResponse * const q);

    void parseModifyCacheSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCacheSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyCacheSubnetGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
