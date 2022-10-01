// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTLIMITSRESPONSE_P_H
#define QTAWS_GETSNAPSHOTLIMITSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class GetSnapshotLimitsResponse;

class GetSnapshotLimitsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit GetSnapshotLimitsResponsePrivate(GetSnapshotLimitsResponse * const q);

    void parseGetSnapshotLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSnapshotLimitsResponse)
    Q_DISABLE_COPY(GetSnapshotLimitsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
