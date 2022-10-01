// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSNAPSHOTBLOCKRESPONSE_P_H
#define QTAWS_PUTSNAPSHOTBLOCKRESPONSE_P_H

#include "ebsresponse_p.h"

namespace QtAws {
namespace Ebs {

class PutSnapshotBlockResponse;

class PutSnapshotBlockResponsePrivate : public EbsResponsePrivate {

public:

    explicit PutSnapshotBlockResponsePrivate(PutSnapshotBlockResponse * const q);

    void parsePutSnapshotBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSnapshotBlockResponse)
    Q_DISABLE_COPY(PutSnapshotBlockResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
