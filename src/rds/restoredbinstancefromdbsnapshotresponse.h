// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTRESPONSE_H
#define QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "restoredbinstancefromdbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromDBSnapshotResponsePrivate;

class QTAWSRDS_EXPORT RestoreDBInstanceFromDBSnapshotResponse : public RdsResponse {
    Q_OBJECT

public:
    RestoreDBInstanceFromDBSnapshotResponse(const RestoreDBInstanceFromDBSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBInstanceFromDBSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceFromDBSnapshotResponse)
    Q_DISABLE_COPY(RestoreDBInstanceFromDBSnapshotResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
