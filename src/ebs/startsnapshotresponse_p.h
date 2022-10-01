// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNAPSHOTRESPONSE_P_H
#define QTAWS_STARTSNAPSHOTRESPONSE_P_H

#include "ebsresponse_p.h"

namespace QtAws {
namespace Ebs {

class StartSnapshotResponse;

class StartSnapshotResponsePrivate : public EbsResponsePrivate {

public:

    explicit StartSnapshotResponsePrivate(StartSnapshotResponse * const q);

    void parseStartSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSnapshotResponse)
    Q_DISABLE_COPY(StartSnapshotResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
