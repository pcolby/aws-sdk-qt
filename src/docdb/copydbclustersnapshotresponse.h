// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTRESPONSE_H

#include "docdbresponse.h"
#include "copydbclustersnapshotrequest.h"

namespace QtAws {
namespace DocDb {

class CopyDBClusterSnapshotResponsePrivate;

class QTAWSDOCDB_EXPORT CopyDBClusterSnapshotResponse : public DocDbResponse {
    Q_OBJECT

public:
    CopyDBClusterSnapshotResponse(const CopyDBClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyDBClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterSnapshotResponse)
    Q_DISABLE_COPY(CopyDBClusterSnapshotResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
