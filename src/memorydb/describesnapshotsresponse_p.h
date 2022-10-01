// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTSRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DescribeSnapshotsResponse;

class DescribeSnapshotsResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DescribeSnapshotsResponsePrivate(DescribeSnapshotsResponse * const q);

    void parseDescribeSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsResponse)
    Q_DISABLE_COPY(DescribeSnapshotsResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
