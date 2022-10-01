// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTRESPONSE_P_H
#define QTAWS_COPYSNAPSHOTRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CopySnapshotResponse;

class CopySnapshotResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CopySnapshotResponsePrivate(CopySnapshotResponse * const q);

    void parseCopySnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopySnapshotResponse)
    Q_DISABLE_COPY(CopySnapshotResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
