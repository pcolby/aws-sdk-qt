// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETESNAPSHOTRESPONSE_H
#define QTAWS_COMPLETESNAPSHOTRESPONSE_H

#include "ebsresponse.h"
#include "completesnapshotrequest.h"

namespace QtAws {
namespace Ebs {

class CompleteSnapshotResponsePrivate;

class QTAWSEBS_EXPORT CompleteSnapshotResponse : public EbsResponse {
    Q_OBJECT

public:
    CompleteSnapshotResponse(const CompleteSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteSnapshotResponse)
    Q_DISABLE_COPY(CompleteSnapshotResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
