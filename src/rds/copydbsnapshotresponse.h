// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBSNAPSHOTRESPONSE_H
#define QTAWS_COPYDBSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "copydbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBSnapshotResponsePrivate;

class QTAWSRDS_EXPORT CopyDBSnapshotResponse : public RdsResponse {
    Q_OBJECT

public:
    CopyDBSnapshotResponse(const CopyDBSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyDBSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBSnapshotResponse)
    Q_DISABLE_COPY(CopyDBSnapshotResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
