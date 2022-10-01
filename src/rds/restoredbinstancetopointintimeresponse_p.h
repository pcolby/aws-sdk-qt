// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCETOPOINTINTIMERESPONSE_P_H
#define QTAWS_RESTOREDBINSTANCETOPOINTINTIMERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceToPointInTimeResponse;

class RestoreDBInstanceToPointInTimeResponsePrivate : public RdsResponsePrivate {

public:

    explicit RestoreDBInstanceToPointInTimeResponsePrivate(RestoreDBInstanceToPointInTimeResponse * const q);

    void parseRestoreDBInstanceToPointInTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreDBInstanceToPointInTimeResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
