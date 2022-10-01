// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTRESPONSE_P_H
#define QTAWS_CREATESNAPSHOTRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class CreateSnapshotResponse;

class CreateSnapshotResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit CreateSnapshotResponsePrivate(CreateSnapshotResponse * const q);

    void parseCreateSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotResponse)
    Q_DISABLE_COPY(CreateSnapshotResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
