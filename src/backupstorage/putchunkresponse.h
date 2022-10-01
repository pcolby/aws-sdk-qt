// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHUNKRESPONSE_H
#define QTAWS_PUTCHUNKRESPONSE_H

#include "backupstorageresponse.h"
#include "putchunkrequest.h"

namespace QtAws {
namespace BackupStorage {

class PutChunkResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT PutChunkResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    PutChunkResponse(const PutChunkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutChunkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutChunkResponse)
    Q_DISABLE_COPY(PutChunkResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
