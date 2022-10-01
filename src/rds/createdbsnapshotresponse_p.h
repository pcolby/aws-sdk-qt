// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEDBSNAPSHOTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBSnapshotResponse;

class CreateDBSnapshotResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBSnapshotResponsePrivate(CreateDBSnapshotResponse * const q);

    void parseCreateDBSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBSnapshotResponse)
    Q_DISABLE_COPY(CreateDBSnapshotResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
