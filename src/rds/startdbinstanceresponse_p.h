// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCERESPONSE_P_H
#define QTAWS_STARTDBINSTANCERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceResponse;

class StartDBInstanceResponsePrivate : public RdsResponsePrivate {

public:

    explicit StartDBInstanceResponsePrivate(StartDBInstanceResponse * const q);

    void parseStartDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDBInstanceResponse)
    Q_DISABLE_COPY(StartDBInstanceResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
