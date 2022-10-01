// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTSRESPONSE_P_H
#define QTAWS_GETSNAPSHOTSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class GetSnapshotsResponse;

class GetSnapshotsResponsePrivate : public KendraResponsePrivate {

public:

    explicit GetSnapshotsResponsePrivate(GetSnapshotsResponse * const q);

    void parseGetSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSnapshotsResponse)
    Q_DISABLE_COPY(GetSnapshotsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
