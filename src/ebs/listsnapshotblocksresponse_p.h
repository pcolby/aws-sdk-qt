// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTBLOCKSRESPONSE_P_H
#define QTAWS_LISTSNAPSHOTBLOCKSRESPONSE_P_H

#include "ebsresponse_p.h"

namespace QtAws {
namespace Ebs {

class ListSnapshotBlocksResponse;

class ListSnapshotBlocksResponsePrivate : public EbsResponsePrivate {

public:

    explicit ListSnapshotBlocksResponsePrivate(ListSnapshotBlocksResponse * const q);

    void parseListSnapshotBlocksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSnapshotBlocksResponse)
    Q_DISABLE_COPY(ListSnapshotBlocksResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
