// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICADBCLUSTERRESPONSE_H
#define QTAWS_PROMOTEREADREPLICADBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "promotereadreplicadbclusterrequest.h"

namespace QtAws {
namespace Rds {

class PromoteReadReplicaDBClusterResponsePrivate;

class QTAWSRDS_EXPORT PromoteReadReplicaDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    PromoteReadReplicaDBClusterResponse(const PromoteReadReplicaDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PromoteReadReplicaDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PromoteReadReplicaDBClusterResponse)
    Q_DISABLE_COPY(PromoteReadReplicaDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
