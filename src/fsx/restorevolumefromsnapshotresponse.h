// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREVOLUMEFROMSNAPSHOTRESPONSE_H
#define QTAWS_RESTOREVOLUMEFROMSNAPSHOTRESPONSE_H

#include "fsxresponse.h"
#include "restorevolumefromsnapshotrequest.h"

namespace QtAws {
namespace FSx {

class RestoreVolumeFromSnapshotResponsePrivate;

class QTAWSFSX_EXPORT RestoreVolumeFromSnapshotResponse : public FSxResponse {
    Q_OBJECT

public:
    RestoreVolumeFromSnapshotResponse(const RestoreVolumeFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreVolumeFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreVolumeFromSnapshotResponse)
    Q_DISABLE_COPY(RestoreVolumeFromSnapshotResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
