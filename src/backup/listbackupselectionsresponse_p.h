// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSELECTIONSRESPONSE_P_H
#define QTAWS_LISTBACKUPSELECTIONSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListBackupSelectionsResponse;

class ListBackupSelectionsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListBackupSelectionsResponsePrivate(ListBackupSelectionsResponse * const q);

    void parseListBackupSelectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupSelectionsResponse)
    Q_DISABLE_COPY(ListBackupSelectionsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
