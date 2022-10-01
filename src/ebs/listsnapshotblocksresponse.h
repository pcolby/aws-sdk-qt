// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTBLOCKSRESPONSE_H
#define QTAWS_LISTSNAPSHOTBLOCKSRESPONSE_H

#include "ebsresponse.h"
#include "listsnapshotblocksrequest.h"

namespace QtAws {
namespace Ebs {

class ListSnapshotBlocksResponsePrivate;

class QTAWSEBS_EXPORT ListSnapshotBlocksResponse : public EbsResponse {
    Q_OBJECT

public:
    ListSnapshotBlocksResponse(const ListSnapshotBlocksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSnapshotBlocksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSnapshotBlocksResponse)
    Q_DISABLE_COPY(ListSnapshotBlocksResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
