// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_RESTOREFROMCLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "restorefromclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreFromClusterSnapshotResponsePrivate;

class QTAWSREDSHIFT_EXPORT RestoreFromClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RestoreFromClusterSnapshotResponse(const RestoreFromClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreFromClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreFromClusterSnapshotResponse)
    Q_DISABLE_COPY(RestoreFromClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
