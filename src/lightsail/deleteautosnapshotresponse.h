// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSNAPSHOTRESPONSE_H
#define QTAWS_DELETEAUTOSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "deleteautosnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteAutoSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteAutoSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteAutoSnapshotResponse(const DeleteAutoSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAutoSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutoSnapshotResponse)
    Q_DISABLE_COPY(DeleteAutoSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
