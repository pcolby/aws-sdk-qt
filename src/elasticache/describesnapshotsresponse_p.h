// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeSnapshotsResponse;

class DescribeSnapshotsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeSnapshotsResponsePrivate(DescribeSnapshotsResponse * const q);

    void parseDescribeSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsResponse)
    Q_DISABLE_COPY(DescribeSnapshotsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
