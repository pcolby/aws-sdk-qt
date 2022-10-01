// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_DELETEDBCLUSTERSNAPSHOTRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterSnapshotResponse;

class DeleteDBClusterSnapshotResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DeleteDBClusterSnapshotResponsePrivate(DeleteDBClusterSnapshotResponse * const q);

    void parseDeleteDBClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterSnapshotResponse)
    Q_DISABLE_COPY(DeleteDBClusterSnapshotResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
