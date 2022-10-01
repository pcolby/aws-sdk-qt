// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANVERSIONSRESPONSE_P_H
#define QTAWS_LISTBACKUPPLANVERSIONSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanVersionsResponse;

class ListBackupPlanVersionsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListBackupPlanVersionsResponsePrivate(ListBackupPlanVersionsResponse * const q);

    void parseListBackupPlanVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupPlanVersionsResponse)
    Q_DISABLE_COPY(ListBackupPlanVersionsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
