// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_CREATEGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateGlobalReplicationGroupResponse;

class CreateGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateGlobalReplicationGroupResponsePrivate(CreateGlobalReplicationGroupResponse * const q);

    void parseCreateGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(CreateGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
