// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSRESPONSE_H
#define QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSRESPONSE_H

#include "redshiftresponse.h"
#include "batchmodifyclustersnapshotsrequest.h"

namespace QtAws {
namespace Redshift {

class BatchModifyClusterSnapshotsResponsePrivate;

class QTAWSREDSHIFT_EXPORT BatchModifyClusterSnapshotsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    BatchModifyClusterSnapshotsResponse(const BatchModifyClusterSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchModifyClusterSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchModifyClusterSnapshotsResponse)
    Q_DISABLE_COPY(BatchModifyClusterSnapshotsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
