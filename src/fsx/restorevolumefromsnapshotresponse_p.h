// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREVOLUMEFROMSNAPSHOTRESPONSE_P_H
#define QTAWS_RESTOREVOLUMEFROMSNAPSHOTRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class RestoreVolumeFromSnapshotResponse;

class RestoreVolumeFromSnapshotResponsePrivate : public FSxResponsePrivate {

public:

    explicit RestoreVolumeFromSnapshotResponsePrivate(RestoreVolumeFromSnapshotResponse * const q);

    void parseRestoreVolumeFromSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreVolumeFromSnapshotResponse)
    Q_DISABLE_COPY(RestoreVolumeFromSnapshotResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
