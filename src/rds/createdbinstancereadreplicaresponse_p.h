// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCEREADREPLICARESPONSE_P_H
#define QTAWS_CREATEDBINSTANCEREADREPLICARESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBInstanceReadReplicaResponse;

class CreateDBInstanceReadReplicaResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBInstanceReadReplicaResponsePrivate(CreateDBInstanceReadReplicaResponse * const q);

    void parseCreateDBInstanceReadReplicaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBInstanceReadReplicaResponse)
    Q_DISABLE_COPY(CreateDBInstanceReadReplicaResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
