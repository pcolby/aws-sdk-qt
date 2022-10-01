// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_CREATECLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "createclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSnapshotResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateClusterSnapshotResponse(const CreateClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterSnapshotResponse)
    Q_DISABLE_COPY(CreateClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
