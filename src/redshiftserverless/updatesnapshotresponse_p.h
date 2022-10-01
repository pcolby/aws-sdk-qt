// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTRESPONSE_P_H
#define QTAWS_UPDATESNAPSHOTRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateSnapshotResponse;

class UpdateSnapshotResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit UpdateSnapshotResponsePrivate(UpdateSnapshotResponse * const q);

    void parseUpdateSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSnapshotResponse)
    Q_DISABLE_COPY(UpdateSnapshotResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
