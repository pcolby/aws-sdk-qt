// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_MODIFYGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyGlobalReplicationGroupResponse;

class ModifyGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyGlobalReplicationGroupResponsePrivate(ModifyGlobalReplicationGroupResponse * const q);

    void parseModifyGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(ModifyGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
