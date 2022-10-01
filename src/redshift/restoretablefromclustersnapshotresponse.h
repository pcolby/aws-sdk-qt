// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "restoretablefromclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreTableFromClusterSnapshotResponsePrivate;

class QTAWSREDSHIFT_EXPORT RestoreTableFromClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RestoreTableFromClusterSnapshotResponse(const RestoreTableFromClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreTableFromClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableFromClusterSnapshotResponse)
    Q_DISABLE_COPY(RestoreTableFromClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
