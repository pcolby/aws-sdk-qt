// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CopyDBClusterSnapshotResponse;

class CopyDBClusterSnapshotResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CopyDBClusterSnapshotResponsePrivate(CopyDBClusterSnapshotResponse * const q);

    void parseCopyDBClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyDBClusterSnapshotResponse)
    Q_DISABLE_COPY(CopyDBClusterSnapshotResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
