// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_DELETEDBCLUSTERSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "deletedbclustersnapshotrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterSnapshotResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBClusterSnapshotResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBClusterSnapshotResponse(const DeleteDBClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterSnapshotResponse)
    Q_DISABLE_COPY(DeleteDBClusterSnapshotResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
