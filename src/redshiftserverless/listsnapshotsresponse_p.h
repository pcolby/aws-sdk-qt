// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSRESPONSE_P_H
#define QTAWS_LISTSNAPSHOTSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ListSnapshotsResponse;

class ListSnapshotsResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ListSnapshotsResponsePrivate(ListSnapshotsResponse * const q);

    void parseListSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSnapshotsResponse)
    Q_DISABLE_COPY(ListSnapshotsResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
