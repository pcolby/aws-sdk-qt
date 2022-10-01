// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTCOPYGRANTRESPONSE_P_H
#define QTAWS_DELETESNAPSHOTCOPYGRANTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteSnapshotCopyGrantResponse;

class DeleteSnapshotCopyGrantResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteSnapshotCopyGrantResponsePrivate(DeleteSnapshotCopyGrantResponse * const q);

    void parseDeleteSnapshotCopyGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotCopyGrantResponse)
    Q_DISABLE_COPY(DeleteSnapshotCopyGrantResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
