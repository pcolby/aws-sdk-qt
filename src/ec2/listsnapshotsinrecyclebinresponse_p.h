// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSINRECYCLEBINRESPONSE_P_H
#define QTAWS_LISTSNAPSHOTSINRECYCLEBINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ListSnapshotsInRecycleBinResponse;

class ListSnapshotsInRecycleBinResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ListSnapshotsInRecycleBinResponsePrivate(ListSnapshotsInRecycleBinResponse * const q);

    void parseListSnapshotsInRecycleBinResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSnapshotsInRecycleBinResponse)
    Q_DISABLE_COPY(ListSnapshotsInRecycleBinResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
