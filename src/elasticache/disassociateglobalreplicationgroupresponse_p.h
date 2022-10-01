// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DisassociateGlobalReplicationGroupResponse;

class DisassociateGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DisassociateGlobalReplicationGroupResponsePrivate(DisassociateGlobalReplicationGroupResponse * const q);

    void parseDisassociateGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(DisassociateGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
