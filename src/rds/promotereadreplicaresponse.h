// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICARESPONSE_H
#define QTAWS_PROMOTEREADREPLICARESPONSE_H

#include "rdsresponse.h"
#include "promotereadreplicarequest.h"

namespace QtAws {
namespace Rds {

class PromoteReadReplicaResponsePrivate;

class QTAWSRDS_EXPORT PromoteReadReplicaResponse : public RdsResponse {
    Q_OBJECT

public:
    PromoteReadReplicaResponse(const PromoteReadReplicaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PromoteReadReplicaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PromoteReadReplicaResponse)
    Q_DISABLE_COPY(PromoteReadReplicaResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
