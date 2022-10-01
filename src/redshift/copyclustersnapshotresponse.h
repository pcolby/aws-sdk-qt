// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_COPYCLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "copyclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class CopyClusterSnapshotResponsePrivate;

class QTAWSREDSHIFT_EXPORT CopyClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CopyClusterSnapshotResponse(const CopyClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyClusterSnapshotResponse)
    Q_DISABLE_COPY(CopyClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
