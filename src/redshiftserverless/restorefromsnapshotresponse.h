// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMSNAPSHOTRESPONSE_H
#define QTAWS_RESTOREFROMSNAPSHOTRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "restorefromsnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class RestoreFromSnapshotResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT RestoreFromSnapshotResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    RestoreFromSnapshotResponse(const RestoreFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreFromSnapshotResponse)
    Q_DISABLE_COPY(RestoreFromSnapshotResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
