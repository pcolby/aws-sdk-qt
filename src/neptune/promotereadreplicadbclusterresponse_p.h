// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICADBCLUSTERRESPONSE_P_H
#define QTAWS_PROMOTEREADREPLICADBCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class PromoteReadReplicaDBClusterResponse;

class PromoteReadReplicaDBClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit PromoteReadReplicaDBClusterResponsePrivate(PromoteReadReplicaDBClusterResponse * const q);

    void parsePromoteReadReplicaDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PromoteReadReplicaDBClusterResponse)
    Q_DISABLE_COPY(PromoteReadReplicaDBClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
