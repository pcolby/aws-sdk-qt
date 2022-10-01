// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPRESPONSE_P_H
#define QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBInstanceAutomatedBackupResponse;

class DeleteDBInstanceAutomatedBackupResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBInstanceAutomatedBackupResponsePrivate(DeleteDBInstanceAutomatedBackupResponse * const q);

    void parseDeleteDBInstanceAutomatedBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBInstanceAutomatedBackupResponse)
    Q_DISABLE_COPY(DeleteDBInstanceAutomatedBackupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
