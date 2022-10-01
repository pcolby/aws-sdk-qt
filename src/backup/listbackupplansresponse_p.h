// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANSRESPONSE_P_H
#define QTAWS_LISTBACKUPPLANSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListBackupPlansResponse;

class ListBackupPlansResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListBackupPlansResponsePrivate(ListBackupPlansResponse * const q);

    void parseListBackupPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupPlansResponse)
    Q_DISABLE_COPY(ListBackupPlansResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
