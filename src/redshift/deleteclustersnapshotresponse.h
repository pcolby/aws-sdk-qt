// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_DELETECLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "deleteclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSnapshotResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteClusterSnapshotResponse(const DeleteClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSnapshotResponse)
    Q_DISABLE_COPY(DeleteClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
