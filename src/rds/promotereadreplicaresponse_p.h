// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICARESPONSE_P_H
#define QTAWS_PROMOTEREADREPLICARESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class PromoteReadReplicaResponse;

class PromoteReadReplicaResponsePrivate : public RdsResponsePrivate {

public:

    explicit PromoteReadReplicaResponsePrivate(PromoteReadReplicaResponse * const q);

    void parsePromoteReadReplicaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PromoteReadReplicaResponse)
    Q_DISABLE_COPY(PromoteReadReplicaResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
