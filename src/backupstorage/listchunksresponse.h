// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHUNKSRESPONSE_H
#define QTAWS_LISTCHUNKSRESPONSE_H

#include "backupstorageresponse.h"
#include "listchunksrequest.h"

namespace QtAws {
namespace BackupStorage {

class ListChunksResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT ListChunksResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    ListChunksResponse(const ListChunksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChunksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChunksResponse)
    Q_DISABLE_COPY(ListChunksResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
