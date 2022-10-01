// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESNAPSHOTRESPONSE_H
#define QTAWS_CREATEINSTANCESNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "createinstancesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstanceSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateInstanceSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateInstanceSnapshotResponse(const CreateInstanceSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstanceSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceSnapshotResponse)
    Q_DISABLE_COPY(CreateInstanceSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
