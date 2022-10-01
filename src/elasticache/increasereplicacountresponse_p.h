// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICACOUNTRESPONSE_P_H
#define QTAWS_INCREASEREPLICACOUNTRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseReplicaCountResponse;

class IncreaseReplicaCountResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit IncreaseReplicaCountResponsePrivate(IncreaseReplicaCountResponse * const q);

    void parseIncreaseReplicaCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IncreaseReplicaCountResponse)
    Q_DISABLE_COPY(IncreaseReplicaCountResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
