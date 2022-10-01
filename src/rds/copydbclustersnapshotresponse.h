// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "copydbclustersnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBClusterSnapshotResponsePrivate;

class QTAWSRDS_EXPORT CopyDBClusterSnapshotResponse : public RdsResponse {
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

} // namespace Rds
} // namespace QtAws

#endif
