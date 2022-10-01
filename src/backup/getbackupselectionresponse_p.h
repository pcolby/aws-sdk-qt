// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPSELECTIONRESPONSE_P_H
#define QTAWS_GETBACKUPSELECTIONRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetBackupSelectionResponse;

class GetBackupSelectionResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetBackupSelectionResponsePrivate(GetBackupSelectionResponse * const q);

    void parseGetBackupSelectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackupSelectionResponse)
    Q_DISABLE_COPY(GetBackupSelectionResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
