// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTRESPONSE_P_H
#define QTAWS_DELETESNAPSHOTRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeleteSnapshotResponse;

class DeleteSnapshotResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeleteSnapshotResponsePrivate(DeleteSnapshotResponse * const q);

    void parseDeleteSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotResponse)
    Q_DISABLE_COPY(DeleteSnapshotResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
