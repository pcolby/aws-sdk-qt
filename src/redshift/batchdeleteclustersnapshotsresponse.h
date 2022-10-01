// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECLUSTERSNAPSHOTSRESPONSE_H
#define QTAWS_BATCHDELETECLUSTERSNAPSHOTSRESPONSE_H

#include "redshiftresponse.h"
#include "batchdeleteclustersnapshotsrequest.h"

namespace QtAws {
namespace Redshift {

class BatchDeleteClusterSnapshotsResponsePrivate;

class QTAWSREDSHIFT_EXPORT BatchDeleteClusterSnapshotsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    BatchDeleteClusterSnapshotsResponse(const BatchDeleteClusterSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteClusterSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteClusterSnapshotsResponse)
    Q_DISABLE_COPY(BatchDeleteClusterSnapshotsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
