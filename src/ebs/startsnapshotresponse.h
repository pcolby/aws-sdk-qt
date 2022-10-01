// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNAPSHOTRESPONSE_H
#define QTAWS_STARTSNAPSHOTRESPONSE_H

#include "ebsresponse.h"
#include "startsnapshotrequest.h"

namespace QtAws {
namespace Ebs {

class StartSnapshotResponsePrivate;

class QTAWSEBS_EXPORT StartSnapshotResponse : public EbsResponse {
    Q_OBJECT

public:
    StartSnapshotResponse(const StartSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSnapshotResponse)
    Q_DISABLE_COPY(StartSnapshotResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
