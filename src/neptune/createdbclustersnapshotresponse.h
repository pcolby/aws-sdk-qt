// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTRESPONSE_H

#include "neptuneresponse.h"
#include "createdbclustersnapshotrequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterSnapshotResponsePrivate;

class QTAWSNEPTUNE_EXPORT CreateDBClusterSnapshotResponse : public NeptuneResponse {
    Q_OBJECT

public:
    CreateDBClusterSnapshotResponse(const CreateDBClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterSnapshotResponse)
    Q_DISABLE_COPY(CreateDBClusterSnapshotResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
