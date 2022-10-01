// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCERESPONSE_P_H
#define QTAWS_STOPDBINSTANCERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceResponse;

class StopDBInstanceResponsePrivate : public RdsResponsePrivate {

public:

    explicit StopDBInstanceResponsePrivate(StopDBInstanceResponse * const q);

    void parseStopDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDBInstanceResponse)
    Q_DISABLE_COPY(StopDBInstanceResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
