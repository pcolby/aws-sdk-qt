// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_MODIFYREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupResponse;

class ModifyReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyReplicationGroupResponsePrivate(ModifyReplicationGroupResponse * const q);

    void parseModifyReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationGroupResponse)
    Q_DISABLE_COPY(ModifyReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
