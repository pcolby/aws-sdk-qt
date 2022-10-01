// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBINSTANCERESPONSE_P_H
#define QTAWS_REMOVEROLEFROMDBINSTANCERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBInstanceResponse;

class RemoveRoleFromDBInstanceResponsePrivate : public RdsResponsePrivate {

public:

    explicit RemoveRoleFromDBInstanceResponsePrivate(RemoveRoleFromDBInstanceResponse * const q);

    void parseRemoveRoleFromDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromDBInstanceResponse)
    Q_DISABLE_COPY(RemoveRoleFromDBInstanceResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
