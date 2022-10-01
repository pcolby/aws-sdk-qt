// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSNAPSHOTRESPONSE_H
#define QTAWS_CREATEDBSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "createdbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSnapshotResponsePrivate;

class QTAWSRDS_EXPORT CreateDBSnapshotResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBSnapshotResponse(const CreateDBSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBSnapshotResponse)
    Q_DISABLE_COPY(CreateDBSnapshotResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
