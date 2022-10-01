// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_DELETEGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteGlobalReplicationGroupResponse;

class DeleteGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteGlobalReplicationGroupResponsePrivate(DeleteGlobalReplicationGroupResponse * const q);

    void parseDeleteGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(DeleteGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
