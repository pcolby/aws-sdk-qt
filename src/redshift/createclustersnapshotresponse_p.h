// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATECLUSTERSNAPSHOTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSnapshotResponse;

class CreateClusterSnapshotResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateClusterSnapshotResponsePrivate(CreateClusterSnapshotResponse * const q);

    void parseCreateClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClusterSnapshotResponse)
    Q_DISABLE_COPY(CreateClusterSnapshotResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
