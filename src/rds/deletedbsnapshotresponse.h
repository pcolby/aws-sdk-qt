// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSNAPSHOTRESPONSE_H
#define QTAWS_DELETEDBSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "deletedbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBSnapshotResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBSnapshotResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBSnapshotResponse(const DeleteDBSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBSnapshotResponse)
    Q_DISABLE_COPY(DeleteDBSnapshotResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
