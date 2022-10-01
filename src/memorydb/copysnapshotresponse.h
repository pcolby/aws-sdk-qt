// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTRESPONSE_H
#define QTAWS_COPYSNAPSHOTRESPONSE_H

#include "memorydbresponse.h"
#include "copysnapshotrequest.h"

namespace QtAws {
namespace MemoryDb {

class CopySnapshotResponsePrivate;

class QTAWSMEMORYDB_EXPORT CopySnapshotResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    CopySnapshotResponse(const CopySnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopySnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopySnapshotResponse)
    Q_DISABLE_COPY(CopySnapshotResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
