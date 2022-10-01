// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBINSTANCERESPONSE_P_H
#define QTAWS_ADDROLETODBINSTANCERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class AddRoleToDBInstanceResponse;

class AddRoleToDBInstanceResponsePrivate : public RdsResponsePrivate {

public:

    explicit AddRoleToDBInstanceResponsePrivate(AddRoleToDBInstanceResponse * const q);

    void parseAddRoleToDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddRoleToDBInstanceResponse)
    Q_DISABLE_COPY(AddRoleToDBInstanceResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
