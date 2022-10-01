// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterSnapshotResponse;

class CreateDBClusterSnapshotResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CreateDBClusterSnapshotResponsePrivate(CreateDBClusterSnapshotResponse * const q);

    void parseCreateDBClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterSnapshotResponse)
    Q_DISABLE_COPY(CreateDBClusterSnapshotResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
