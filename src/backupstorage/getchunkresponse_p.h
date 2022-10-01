// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHUNKRESPONSE_P_H
#define QTAWS_GETCHUNKRESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class GetChunkResponse;

class GetChunkResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit GetChunkResponsePrivate(GetChunkResponse * const q);

    void parseGetChunkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChunkResponse)
    Q_DISABLE_COPY(GetChunkResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
