// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTBLOCKRESPONSE_P_H
#define QTAWS_GETSNAPSHOTBLOCKRESPONSE_P_H

#include "ebsresponse_p.h"

namespace QtAws {
namespace Ebs {

class GetSnapshotBlockResponse;

class GetSnapshotBlockResponsePrivate : public EbsResponsePrivate {

public:

    explicit GetSnapshotBlockResponsePrivate(GetSnapshotBlockResponse * const q);

    void parseGetSnapshotBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSnapshotBlockResponse)
    Q_DISABLE_COPY(GetSnapshotBlockResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
