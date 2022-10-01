// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPSELECTIONRESPONSE_P_H
#define QTAWS_DELETEBACKUPSELECTIONRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteBackupSelectionResponse;

class DeleteBackupSelectionResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteBackupSelectionResponsePrivate(DeleteBackupSelectionResponse * const q);

    void parseDeleteBackupSelectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupSelectionResponse)
    Q_DISABLE_COPY(DeleteBackupSelectionResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
