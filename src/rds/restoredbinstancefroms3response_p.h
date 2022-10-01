// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_P_H
#define QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromS3Response;

class RestoreDBInstanceFromS3ResponsePrivate : public RdsResponsePrivate {

public:

    explicit RestoreDBInstanceFromS3ResponsePrivate(RestoreDBInstanceFromS3Response * const q);

    void parseRestoreDBInstanceFromS3Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceFromS3Response)
    Q_DISABLE_COPY(RestoreDBInstanceFromS3ResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
