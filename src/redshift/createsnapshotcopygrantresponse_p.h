// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTCOPYGRANTRESPONSE_P_H
#define QTAWS_CREATESNAPSHOTCOPYGRANTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotCopyGrantResponse;

class CreateSnapshotCopyGrantResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateSnapshotCopyGrantResponsePrivate(CreateSnapshotCopyGrantResponse * const q);

    void parseCreateSnapshotCopyGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotCopyGrantResponse)
    Q_DISABLE_COPY(CreateSnapshotCopyGrantResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
