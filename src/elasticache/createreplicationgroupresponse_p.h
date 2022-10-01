// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_CREATEREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateReplicationGroupResponse;

class CreateReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateReplicationGroupResponsePrivate(CreateReplicationGroupResponse * const q);

    void parseCreateReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationGroupResponse)
    Q_DISABLE_COPY(CreateReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
