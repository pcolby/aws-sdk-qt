// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_DELETEDBCLUSTERSNAPSHOTRESPONSE_H

#include "neptuneresponse.h"
#include "deletedbclustersnapshotrequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterSnapshotResponsePrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBClusterSnapshotResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DeleteDBClusterSnapshotResponse(const DeleteDBClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterSnapshotResponse)
    Q_DISABLE_COPY(DeleteDBClusterSnapshotResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
