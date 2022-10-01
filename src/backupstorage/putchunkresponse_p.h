// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHUNKRESPONSE_P_H
#define QTAWS_PUTCHUNKRESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class PutChunkResponse;

class PutChunkResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit PutChunkResponsePrivate(PutChunkResponse * const q);

    void parsePutChunkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutChunkResponse)
    Q_DISABLE_COPY(PutChunkResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
