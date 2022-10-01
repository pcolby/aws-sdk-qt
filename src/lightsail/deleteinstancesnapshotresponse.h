// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCESNAPSHOTRESPONSE_H
#define QTAWS_DELETEINSTANCESNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "deleteinstancesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteInstanceSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteInstanceSnapshotResponse(const DeleteInstanceSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInstanceSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceSnapshotResponse)
    Q_DISABLE_COPY(DeleteInstanceSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
