// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICACOUNTRESPONSE_P_H
#define QTAWS_DECREASEREPLICACOUNTRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseReplicaCountResponse;

class DecreaseReplicaCountResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DecreaseReplicaCountResponsePrivate(DecreaseReplicaCountResponse * const q);

    void parseDecreaseReplicaCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DecreaseReplicaCountResponse)
    Q_DISABLE_COPY(DecreaseReplicaCountResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
