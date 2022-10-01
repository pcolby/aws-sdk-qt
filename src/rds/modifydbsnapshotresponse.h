// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTRESPONSE_H
#define QTAWS_MODIFYDBSNAPSHOTRESPONSE_H

#include "rdsresponse.h"
#include "modifydbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBSnapshotResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBSnapshotResponse(const ModifyDBSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSnapshotResponse)
    Q_DISABLE_COPY(ModifyDBSnapshotResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
