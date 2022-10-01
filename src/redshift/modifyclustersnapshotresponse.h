// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterSnapshotResponse(const ModifyClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterSnapshotResponse)
    Q_DISABLE_COPY(ModifyClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
