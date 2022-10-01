// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "disassociateglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DisassociateGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DisassociateGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DisassociateGlobalReplicationGroupResponse(const DisassociateGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(DisassociateGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
