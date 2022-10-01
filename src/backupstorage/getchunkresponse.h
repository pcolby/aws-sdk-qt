// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHUNKRESPONSE_H
#define QTAWS_GETCHUNKRESPONSE_H

#include "backupstorageresponse.h"
#include "getchunkrequest.h"

namespace QtAws {
namespace BackupStorage {

class GetChunkResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT GetChunkResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    GetChunkResponse(const GetChunkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChunkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChunkResponse)
    Q_DISABLE_COPY(GetChunkResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
