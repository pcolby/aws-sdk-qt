// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_FAILOVERGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class FailoverGlobalReplicationGroupResponse;

class FailoverGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit FailoverGlobalReplicationGroupResponsePrivate(FailoverGlobalReplicationGroupResponse * const q);

    void parseFailoverGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FailoverGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(FailoverGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
