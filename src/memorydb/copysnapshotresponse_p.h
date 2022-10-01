// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTRESPONSE_P_H
#define QTAWS_COPYSNAPSHOTRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class CopySnapshotResponse;

class CopySnapshotResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit CopySnapshotResponsePrivate(CopySnapshotResponse * const q);

    void parseCopySnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopySnapshotResponse)
    Q_DISABLE_COPY(CopySnapshotResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
