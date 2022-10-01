// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPSELECTIONRESPONSE_P_H
#define QTAWS_CREATEBACKUPSELECTIONRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class CreateBackupSelectionResponse;

class CreateBackupSelectionResponsePrivate : public BackupResponsePrivate {

public:

    explicit CreateBackupSelectionResponsePrivate(CreateBackupSelectionResponse * const q);

    void parseCreateBackupSelectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackupSelectionResponse)
    Q_DISABLE_COPY(CreateBackupSelectionResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
