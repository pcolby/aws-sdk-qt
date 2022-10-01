// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteReplicationGroupResponse;

class DeleteReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteReplicationGroupResponsePrivate(DeleteReplicationGroupResponse * const q);

    void parseDeleteReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationGroupResponse)
    Q_DISABLE_COPY(DeleteReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
