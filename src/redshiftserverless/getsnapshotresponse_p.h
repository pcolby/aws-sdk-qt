// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTRESPONSE_P_H
#define QTAWS_GETSNAPSHOTRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetSnapshotResponse;

class GetSnapshotResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetSnapshotResponsePrivate(GetSnapshotResponse * const q);

    void parseGetSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSnapshotResponse)
    Q_DISABLE_COPY(GetSnapshotResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
