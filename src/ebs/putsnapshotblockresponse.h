// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSNAPSHOTBLOCKRESPONSE_H
#define QTAWS_PUTSNAPSHOTBLOCKRESPONSE_H

#include "ebsresponse.h"
#include "putsnapshotblockrequest.h"

namespace QtAws {
namespace Ebs {

class PutSnapshotBlockResponsePrivate;

class QTAWSEBS_EXPORT PutSnapshotBlockResponse : public EbsResponse {
    Q_OBJECT

public:
    PutSnapshotBlockResponse(const PutSnapshotBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSnapshotBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSnapshotBlockResponse)
    Q_DISABLE_COPY(PutSnapshotBlockResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
