// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTRESPONSE_P_H
#define QTAWS_UPDATESNAPSHOTRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class UpdateSnapshotResponse;

class UpdateSnapshotResponsePrivate : public FSxResponsePrivate {

public:

    explicit UpdateSnapshotResponsePrivate(UpdateSnapshotResponse * const q);

    void parseUpdateSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSnapshotResponse)
    Q_DISABLE_COPY(UpdateSnapshotResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
