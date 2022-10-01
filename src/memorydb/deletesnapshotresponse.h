// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTRESPONSE_H
#define QTAWS_DELETESNAPSHOTRESPONSE_H

#include "memorydbresponse.h"
#include "deletesnapshotrequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteSnapshotResponsePrivate;

class QTAWSMEMORYDB_EXPORT DeleteSnapshotResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DeleteSnapshotResponse(const DeleteSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotResponse)
    Q_DISABLE_COPY(DeleteSnapshotResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
