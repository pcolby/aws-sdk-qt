// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTRESPONSE_H
#define QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTRESPONSE_H

#include "neptuneresponse.h"
#include "restoredbclusterfromsnapshotrequest.h"

namespace QtAws {
namespace Neptune {

class RestoreDBClusterFromSnapshotResponsePrivate;

class QTAWSNEPTUNE_EXPORT RestoreDBClusterFromSnapshotResponse : public NeptuneResponse {
    Q_OBJECT

public:
    RestoreDBClusterFromSnapshotResponse(const RestoreDBClusterFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBClusterFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterFromSnapshotResponse)
    Q_DISABLE_COPY(RestoreDBClusterFromSnapshotResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
